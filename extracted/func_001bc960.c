void func_001bc960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bc960: addiu $sp, $sp, -0x10
    a0 = 0x24 << 16;                                            // 0x001bc964: lui $a0, 0x24
    v0 = 3;                                                     // 0x001bc96c: addiu $v0, $zero, 3
    a0 = a0 + -0x20f8;                                          // 0x001bc970: addiu $a0, $a0, -0x20f8
    *(uint32_t*)((gp) + -0x7c50) = v0;                          // 0x001bc974: sw $v0, -0x7c50($gp)
    func_0011c140();  // 0x11c0a0                                // 0x001bc978: jal 0x11c0a0
    *(uint32_t*)((gp) + -0x632c) = 0;                           // 0x001bc97c: sw $zero, -0x632c($gp)
    if (v0 >= 0) goto label_0x1bc9a4;                           // 0x001bc980: bgez $v0, 0x1bc9a4
    /* nop */                                                   // 0x001bc984: nop 
    a0 = 0x24 << 16;                                            // 0x001bc988: lui $a0, 0x24
    a0 = &str_0023df10;  // "cdrom0:\\MODULES\\ATAD.IRX;1"      // 0x001bc990: addiu $a0, $a0, -0x20f0
    func_001bcad0();  // 0x1bca60                                // 0x001bc994: jal 0x1bca60
    if (v0 < 0) goto label_0x1bca4c;                            // 0x001bc99c: bltz $v0, 0x1bca4c
    /* nop */                                                   // 0x001bc9a0: nop 
label_0x1bc9a4:
    a0 = 0x24 << 16;                                            // 0x001bc9a4: lui $a0, 0x24
    a0 = &str_0023df30;  // "cdrom0:\\MODULES\\HDD.IRX;1"       // 0x001bc9ac: addiu $a0, $a0, -0x20d0
    func_001bcad0();  // 0x1bca60                                // 0x001bc9b0: jal 0x1bca60
    if (v0 < 0) goto label_0x1bca4c;                            // 0x001bc9b8: bltz $v0, 0x1bca4c
    a0 = 0x24 << 16;                                            // 0x001bc9bc: lui $a0, 0x24
    a2 = 0x22 << 16;                                            // 0x001bc9c0: lui $a2, 0x22
    a0 = &str_0023df50;  // "cdrom0:\\MODULES\\PFS.IRX;1"       // 0x001bc9c4: addiu $a0, $a0, -0x20b0
    a1 = 0xa;                                                   // 0x001bc9c8: addiu $a1, $zero, 0xa
    func_001bcad0();  // 0x1bca60                                // 0x001bc9cc: jal 0x1bca60
    a2 = a2 + -0x33a8;                                          // 0x001bc9d0: addiu $a2, $a2, -0x33a8
    if (v0 < 0) goto label_0x1bca4c;                            // 0x001bc9d4: bltz $v0, 0x1bca4c
    a0 = 0x24 << 16;                                            // 0x001bc9d8: lui $a0, 0x24
    a2 = 0x22 << 16;                                            // 0x001bc9dc: lui $a2, 0x22
    a0 = &str_0023df70;  // "hdd0:"                             // 0x001bc9e0: addiu $a0, $a0, -0x2090
    a1 = 0x10;                                                  // 0x001bc9e4: addiu $a1, $zero, 0x10
    func_001bcad0();  // 0x1bca60                                // 0x001bc9e8: jal 0x1bca60
    a2 = a2 + -0x3390;                                          // 0x001bc9ec: addiu $a2, $a2, -0x3390
    if (v0 < 0) goto label_0x1bca4c;                            // 0x001bc9f0: bltz $v0, 0x1bca4c
    /* nop */                                                   // 0x001bc9f4: nop 
    func_001bcb70();  // 0x1bcad0                                // 0x001bc9f8: jal 0x1bcad0
    /* nop */                                                   // 0x001bc9fc: nop 
    a0 = 0x24 << 16;                                            // 0x001bca00: lui $a0, 0x24
    a1 = 0x4807;                                                // 0x001bca04: addiu $a1, $zero, 0x4807
    a0 = &str_0023df90;  // "dev9x:"                            // 0x001bca08: addiu $a0, $a0, -0x2070
    func_0011b140();  // 0x11af08                                // 0x001bca18: jal 0x11af08
    a0 = 0x24 << 16;                                            // 0x001bca20: lui $a0, 0x24
    *(uint32_t*)((gp) + -0x7c50) = v0;                          // 0x001bca24: sw $v0, -0x7c50($gp)
    a0 = &str_0023df90;  // "dev9x:"                            // 0x001bca28: addiu $a0, $a0, -0x2070
    a1 = 0x4803;                                                // 0x001bca2c: addiu $a1, $zero, 0x4803
    a2 = gp + -0x6320;                                          // 0x001bca30: addiu $a2, $gp, -0x6320
    a3 = 1;                                                     // 0x001bca34: addiu $a3, $zero, 1
    func_0011b140();  // 0x11af08                                // 0x001bca3c: jal 0x11af08
    func_001bce10();  // 0x1bcd00                                // 0x001bca44: jal 0x1bcd00
    /* nop */                                                   // 0x001bca48: nop 
label_0x1bca4c:
    return;                                                     // 0x001bca50: jr $ra
    sp = sp + 0x10;                                             // 0x001bca54: addiu $sp, $sp, 0x10
}