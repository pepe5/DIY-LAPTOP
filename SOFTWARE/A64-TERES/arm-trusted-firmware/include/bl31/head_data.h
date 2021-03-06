/*
 *
 * Header for system
 *
 */

#ifndef __HEAD_H__
#define __HEAD_H__

/******************************************************************************/
/*               the control information stored in file head                  */
/******************************************************************************/
struct spare_boot_ctrl_head {
	unsigned int  jump_instruction;   // one intruction jumping to real code
	unsigned char magic[8];           // ="u-boot"
	unsigned int  check_sum;          // generated by PC
	unsigned int  align_size;		  // align size in byte
	unsigned int  length;             // the size of all file
	unsigned int  uboot_length;       // the size of uboot
	unsigned char version[8];         // uboot version
	unsigned char platform[8];        // platform information
	int            reserved[1];        //stamp space, 16bytes align
} ;



#endif /* __HEAD_H__ */
