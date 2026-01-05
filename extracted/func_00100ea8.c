/** @category system/ps2 @status complete @author caprado */
void func_00100ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00100ea8: addiu $sp, $sp, -0x40
    s0 = 0x1f << 16;                                            // 0x00100ebc: lui $s0, 0x1f
    func_001005b0();  // 1005b0                                // 0x00100ec0: jal 0x1005b0
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00100ec8: lw $a0, -0x20d4($s0)
    SetOsdConfigParam();  // 0x114330                           // 0x00100ecc: jal 0x114330
    /* nop */                                                   // 0x00100ed0: nop 
    v1 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00100ed4: lw $v1, -0x20d4($s0)
    if (v1 == v0) goto label_0x100f08;                          // 0x00100ed8: beq $v1, $v0, 0x100f08
    v0 = 0x1f << 16;                                            // 0x00100edc: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100ee0: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100f40;                           // 0x00100ee4: blez $v1, 0x100f40
    v0 = 0x1f << 16;                                            // 0x00100ee8: lui $v0, 0x1f
    a0 = 0x22 << 16;                                            // 0x00100eec: lui $a0, 0x22
    a2 = g_001edf18;  // Global at 0x001edf18                   // 0x00100ef0: lw $a2, -0x20e8($v0)
    a0 = &str_0021fdf8;  // "Libcdvd bind err S cmd\n"          // 0x00100ef4: addiu $a0, $a0, -0x208
    func_00116508();  // 116508                                // 0x00100ef8: jal 0x116508
    goto label_0x101000;                                        // 0x00100f00: b 0x101000
label_0x100f08:
    v0 = 0x25 << 16;                                            // 0x00100f08: lui $v0, 0x25
    v1 = 0x1f << 16;                                            // 0x00100f0c: lui $v1, 0x1f
    a0 = g_0024b718;  // Global at 0x0024b718                   // 0x00100f10: lw $a0, -0x48e8($v0)
    a1 = 0x25 << 16;                                            // 0x00100f14: lui $a1, 0x25
    g_001edf18 = s1;  // Global at 0x001edf18                   // 0x00100f18: sw $s1, -0x20e8($v1)
    iReferThreadStatus();  // 0x1141e0                          // 0x00100f1c: jal 0x1141e0
    a1 = a1 + -0x48e0;                                          // 0x00100f20: addiu $a1, $a1, -0x48e0
    func_00100e38();  // 100e38                                // 0x00100f24: jal 0x100e38
    a0 = 1;                                                     // 0x00100f28: addiu $a0, $zero, 1
    if (v0 == 0) goto label_0x100f48;                           // 0x00100f2c: beqz $v0, 0x100f48
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00100f34: lw $a0, -0x20d4($s0)
    iSignalSema();  // 0x114300                                 // 0x00100f38: jal 0x114300
    /* nop */                                                   // 0x00100f3c: nop 
label_0x100f40:
    goto label_0x101000;                                        // 0x00100f40: b 0x101000
label_0x100f48:
    func_00116d40();  // 116d40                                // 0x00100f48: jal 0x116d40
    s2 = 0x1f << 16;                                            // 0x00100f4c: lui $s2, 0x1f
    v0 = g_001edf4c;  // Global at 0x001edf4c                   // 0x00100f50: lw $v0, -0x20b4($s2)
    if (v0 >= 0) goto label_0x101000;                           // 0x00100f54: bgez $v0, 0x101000
    v0 = 1;                                                     // 0x00100f58: addiu $v0, $zero, 1
    goto label_0x100f8c;                                        // 0x00100f5c: b 0x100f8c
    s1 = 0x1f << 16;                                            // 0x00100f60: lui $s1, 0x1f
    /* nop */                                                   // 0x00100f64: nop 
label_0x100f68:
    v0 = 0x10 << 16;                                            // 0x00100f68: lui $v0, 0x10
    v1 = -1;                                                    // 0x00100f6c: addiu $v1, $zero, -1
label_0x100f70:
    v0 = v0 + -1;                                               // 0x00100f70: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100f74: nop 
    /* nop */                                                   // 0x00100f78: nop 
    /* nop */                                                   // 0x00100f7c: nop 
    /* nop */                                                   // 0x00100f80: nop 
    if (v0 != v1) goto label_0x100f70;                          // 0x00100f84: bne $v0, $v1, 0x100f70
    /* nop */                                                   // 0x00100f88: nop 
label_0x100f8c:
    s0 = s1 + -0x580;                                           // 0x00100f8c: addiu $s0, $s1, -0x580
label_0x100f90:
    a1 = 0x8000 << 16;                                          // 0x00100f90: lui $a1, 0x8000
    a1 = a1 | 0x593;                                            // 0x00100f98: ori $a1, $a1, 0x593
    func_001174d8();  // 1174d8                                // 0x00100f9c: jal 0x1174d8
    if (v0 >= 0) goto label_0x100ff4;                           // 0x00100fa4: bgezl $v0, 0x100ff4
    v0 = g_001efaa4;  // Global at 0x001efaa4                   // 0x00100fa8: lw $v0, 0x24($s0)
    v0 = 0x1f << 16;                                            // 0x00100fac: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00100fb0: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x100fcc;                           // 0x00100fb4: blez $v1, 0x100fcc
    v0 = 0x10 << 16;                                            // 0x00100fb8: lui $v0, 0x10
    a0 = 0x22 << 16;                                            // 0x00100fbc: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00100fc0: jal 0x116508
    a0 = &str_0021fe20;  // "Libcdvd bind err %d CD_Init %d\n"  // 0x00100fc4: addiu $a0, $a0, -0x1e0
    v0 = 0x10 << 16;                                            // 0x00100fc8: lui $v0, 0x10
label_0x100fcc:
    v1 = -1;                                                    // 0x00100fcc: addiu $v1, $zero, -1
label_0x100fd0:
    v0 = v0 + -1;                                               // 0x00100fd0: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00100fd4: nop 
    /* nop */                                                   // 0x00100fd8: nop 
    /* nop */                                                   // 0x00100fdc: nop 
    /* nop */                                                   // 0x00100fe0: nop 
    if (v0 != v1) goto label_0x100fd0;                          // 0x00100fe4: bne $v0, $v1, 0x100fd0
    /* nop */                                                   // 0x00100fe8: nop 
    goto label_0x100f90;                                        // 0x00100fec: b 0x100f90
    s0 = s1 + -0x580;                                           // 0x00100ff0: addiu $s0, $s1, -0x580
label_0x100ff4:
    if (v0 == 0) goto label_0x100f68;                           // 0x00100ff4: beqz $v0, 0x100f68
    v0 = 1;                                                     // 0x00100ff8: addiu $v0, $zero, 1
    g_001edf4c = 0;  // Global at 0x001edf4c                    // 0x00100ffc: sw $zero, -0x20b4($s2)
label_0x101000:
    return;                                                     // 0x00101010: jr $ra
    sp = sp + 0x40;                                             // 0x00101014: addiu $sp, $sp, 0x40
}