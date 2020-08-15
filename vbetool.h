typedef struct LRMI_regs reg_frame;

int do_vbe_service(unsigned int AX, unsigned int BX, reg_frame *regs);
int do_real_post(unsigned pci_device);
int do_blank(int state);
int do_set_mode (int mode, int vga);
int do_get_mode(void);
int do_get_panel_brightness(void);
int do_set_panel_brightness(int brightness);
int do_invert_panel(void);
int do_udev_post(char *);
int do_post(int boot_flag);
void restore_state(void);
int save_state(void);
void text_mode(void);
int check_console(void);
int enable_vga(void);
int disable_vga(void);
int do_get_panel_id();

