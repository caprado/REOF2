/** @category: system/irq @status: complete @author: caprado */
void func_001aaf50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_30, local_34, local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x001aaf50: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aaf5c: addu.qb $zero, $sp, $s1
    func_00116d40();  // 116d40                                // 0x001aaf60: jal 0x116d40
    func_0011b4e8();  // 11b4e8                                // 0x001aaf68: jal 0x11b4e8
    /* nop */                                                   // 0x001aaf6c: nop 
    func_001010c8();  // 1010c8                                // 0x001aaf70: jal 0x1010c8
    func_001186f8();  // 1186f8                                // 0x001aaf78: jal 0x1186f8
    /* nop */                                                   // 0x001aaf7c: nop 
label_0x1aaf80:
    a0 = 0x24 << 16;                                            // 0x001aaf80: lui $a0, 0x24
    func_0011c968();  // 11c968                                // 0x001aaf84: jal 0x11c968
    a0 = &str_0023da80;  // "cdrom0:\\MODULES\\DRIVE.DAT;1"     // 0x001aaf88: addiu $a0, $a0, -0x2580
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001aaf8c: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001aaf90: xori $v0, $v0, 1
    if (v0 != 0) goto label_0x1aaf80;                           // 0x001aaf94: bnez $v0, 0x1aaf80
    /* nop */                                                   // 0x001aaf98: nop 
label_0x1aaf9c:
    func_0011c918();  // 11c918                                // 0x001aaf9c: jal 0x11c918
    /* nop */                                                   // 0x001aafa0: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001aafa4: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001aafa8: xori $v0, $v0, 1
    /* nop */                                                   // 0x001aafac: nop 
    /* nop */                                                   // 0x001aafb0: nop 
    if (v0 != 0) goto label_0x1aaf9c;                           // 0x001aafb4: bnez $v0, 0x1aaf9c
    /* nop */                                                   // 0x001aafb8: nop 
    func_00116d40();  // 116d40                                // 0x001aafbc: jal 0x116d40
    func_0011bbc8();  // 11bbc8                                // 0x001aafc4: jal 0x11bbc8
    /* nop */                                                   // 0x001aafc8: nop 
    func_001186f8();  // 1186f8                                // 0x001aafcc: jal 0x1186f8
    /* nop */                                                   // 0x001aafd0: nop 
    func_0011b4e8();  // 11b4e8                                // 0x001aafd4: jal 0x11b4e8
    /* nop */                                                   // 0x001aafd8: nop 
    func_001010c8();  // 1010c8                                // 0x001aafdc: jal 0x1010c8
    func_00101c58();  // 101c58                                // 0x001aafe4: jal 0x101c58
    a0 = 2;                                                     // 0x001aafe8: addiu $a0, $zero, 2
label_0x1aafec:
    a0 = 0x24 << 16;                                            // 0x001aafec: lui $a0, 0x24
    a1 = 1;                                                     // 0x001aaff0: addiu $a1, $zero, 1
    func_00118730();  // 118730                                // 0x001aaff4: jal 0x118730
    a0 = &str_0023daa0;  // "cdrom0:\\MODULES\\USBD.IRX;1"      // 0x001aaff8: addiu $a0, $a0, -0x2560
    if (v0 < 0) goto label_0x1aafec;                            // 0x001ab000: bltz $v0, 0x1aafec
    /* nop */                                                   // 0x001ab004: nop 
    func_00118b38();  // 118b38                                // 0x001ab010: jal 0x118b38
    a2 = 2;                                                     // 0x001ab014: addiu $a2, $zero, 2
    func_00118b38();  // 118b38                                // 0x001ab024: jal 0x118b38
    a1 = 0x100 << 16;                                           // 0x001ab030: lui $a1, 0x100
    func_00118d70();  // 118d70                                // 0x001ab034: jal 0x118d70
    func_001189b8();  // 1189b8                                // 0x001ab03c: jal 0x1189b8
label_0x1ab044:
    func_0011b570();  // 11b570                                // 0x001ab044: jal 0x11b570
    /* nop */                                                   // 0x001ab050: nop 
    /* nop */                                                   // 0x001ab054: nop 
    if (v0 == 0) goto label_0x1ab044;                           // 0x001ab058: beqz $v0, 0x1ab044
    /* nop */                                                   // 0x001ab05c: nop 
    v0 = 0x100 << 16;                                           // 0x001ab060: lui $v0, 0x100
    local_30 = v0;                                              // 0x001ab068: sw $v0, 0x30($sp)
    local_38 = s1;                                              // 0x001ab06c: sw $s1, 0x38($sp)
    local_34 = s0;                                              // 0x001ab070: sw $s0, 0x34($sp)
    iFlushCache();  // 0x114560                                 // 0x001ab074: jal 0x114560
    local_3c = 0;                                               // 0x001ab078: sw $zero, 0x3c($sp)
    a0 = sp + 0x30;                                             // 0x001ab07c: addiu $a0, $sp, 0x30
    isceSifSetDma();  // 0x1146a0                               // 0x001ab080: jal 0x1146a0
    a1 = 1;                                                     // 0x001ab084: addiu $a1, $zero, 1
label_0x1ab08c:
    sceSifSetDma();  // 0x114680                                // 0x001ab08c: jal 0x114680
    /* nop */                                                   // 0x001ab094: nop 
    /* nop */                                                   // 0x001ab098: nop 
    /* nop */                                                   // 0x001ab09c: nop 
    if (v0 >= 0) goto label_0x1ab08c;                           // 0x001ab0a0: bgez $v0, 0x1ab08c
    /* nop */                                                   // 0x001ab0a4: nop 
    at = 0x100 << 16;                                           // 0x001ab0a8: lui $at, 0x100
    a1 = 0x100 << 16;                                           // 0x001ab0ac: lui $a1, 0x100
    v1 = g_01000004;  // Global at 0x01000004                   // 0x001ab0b0: lw $v1, 4($at)
    a1 = a1 + 8;                                                // 0x001ab0b4: addiu $a1, $a1, 8
    goto label_0x1ab0d4;                                        // 0x001ab0b8: b 0x1ab0d4
label_0x1ab0c0:
    v0 = g_01000008;  // Global at 0x01000008                   // 0x001ab0c0: lw $v0, 0($a1)
    a0 = a0 + 1;                                                // 0x001ab0c4: addiu $a0, $a0, 1
    v0 = v0 + s0;                                               // 0x001ab0c8: addu $v0, $v0, $s0
    g_01000008 = v0;  // Global at 0x01000008                   // 0x001ab0cc: sw $v0, 0($a1)
    a1 = a1 + 8;                                                // 0x001ab0d0: addiu $a1, $a1, 8
label_0x1ab0d4:
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001ab0d4: slt $v0, $a0, $v1
    if (v0 != 0) goto label_0x1ab0c0;                           // 0x001ab0d8: bnez $v0, 0x1ab0c0
    s1 = 0x22 << 16;                                            // 0x001ab0dc: lui $s1, 0x22
    goto label_0x1ab110;                                        // 0x001ab0e0: b 0x1ab110
    s1 = s1 + -0x44f0;                                          // 0x001ab0e4: addiu $s1, $s1, -0x44f0
label_0x1ab0e8:
    if (v1 != v0) goto label_0x1ab0f8;                          // 0x001ab0e8: bne $v1, $v0, 0x1ab0f8
    a0 = 1;                                                     // 0x001ab0ec: addiu $a0, $zero, 1
    func_0012c188();  // 12c188                                // 0x001ab0f0: jal 0x12c188
    a1 = 2;                                                     // 0x001ab0f4: addiu $a1, $zero, 2
label_0x1ab0f8:
    a1 = g_0021bb10;  // Global at 0x0021bb10                   // 0x001ab0f8: lw $a1, 0($s1)
    a2 = g_0021bb14;  // Global at 0x0021bb14                   // 0x001ab0fc: lw $a2, 4($s1)
    a3 = g_0021bb18;  // Global at 0x0021bb18                   // 0x001ab100: lw $a3, 8($s1)
    func_001aaef0();  // 1aaef0                                // 0x001ab104: jal 0x1aaef0
    a0 = 0x100 << 16;                                           // 0x001ab108: lui $a0, 0x100
    s1 = s1 + 0xc;                                              // 0x001ab10c: addiu $s1, $s1, 0xc
label_0x1ab110:
    v1 = g_0021bb1c;  // Global at 0x0021bb1c                   // 0x001ab110: lw $v1, 0($s1)
    v0 = -1;                                                    // 0x001ab114: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x1ab0e8;                          // 0x001ab118: bne $v1, $v0, 0x1ab0e8
    v0 = 9;                                                     // 0x001ab11c: addiu $v0, $zero, 9
    func_0011b6d8();  // 11b6d8                                // 0x001ab120: jal 0x11b6d8
    func_001bc960();  // 1bc960                                // 0x001ab128: jal 0x1bc960
    /* nop */                                                   // 0x001ab12c: nop 
    a0 = 0x24 << 16;                                            // 0x001ab130: lui $a0, 0x24
    a0 = &str_0023dac0;  // "cdrom0:\\MODULES\\USBKB.IRX;1"     // 0x001ab138: addiu $a0, $a0, -0x2540
    func_0018d5d0();  // 18d5d0                                // 0x001ab140: jal 0x18d5d0
    a0 = 0x24 << 16;                                            // 0x001ab148: lui $a0, 0x24
    a2 = 0x24 << 16;                                            // 0x001ab14c: lui $a2, 0x24
    a0 = &str_0023dae0;  // "keybd=1"                           // 0x001ab150: addiu $a0, $a0, -0x2520
    a1 = 0x10;                                                  // 0x001ab154: addiu $a1, $zero, 0x10
    a2 = &str_0023db00;  // "SND DATA OVER!"                    // 0x001ab158: addiu $a2, $a2, -0x2500
    func_0018d5d0();  // 18d5d0                                // 0x001ab15c: jal 0x18d5d0
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ab168: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ab16c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ab170: jr $ra
    sp = sp + 0x40;                                             // 0x001ab174: addiu $sp, $sp, 0x40
}