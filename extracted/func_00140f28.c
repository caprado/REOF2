void func_00140f28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00140f28: addiu $sp, $sp, -0x10
    return func_00139288();  // Tail call                        // 0x00140f34: j 0x139228
    sp = sp + 0x10;                                             // 0x00140f38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00140f3c: nop 
    sp = sp + -0x40;                                            // 0x00140f40: addiu $sp, $sp, -0x40
    s5 = 0x21 << 16;                                            // 0x00140f48: lui $s5, 0x21
    v0 = g_0021007c;  // Global at 0x0021007c                   // 0x00140f4c: lw $v0, 0x7c($s5)
    if (v0 != 0) goto label_0x1410a4;                           // 0x00140f64: bnez $v0, 0x1410a4
    s0 = 0x21 << 16;                                            // 0x00140f6c: lui $s0, 0x21
    s4 = 0x21 << 16;                                            // 0x00140f70: lui $s4, 0x21
    s0 = s0 + 0x318;                                            // 0x00140f74: addiu $s0, $s0, 0x318
    s0 = s0 + 0x40;                                             // 0x00140f80: addiu $s0, $s0, 0x40
    a2 = 0x8d0;                                                 // 0x00140f84: addiu $a2, $zero, 0x8d0
    func_00107d30();  // 0x107c70                                // 0x00140f88: jal 0x107c70
    s3 = s4 + 0x84;                                             // 0x00140f8c: addiu $s3, $s4, 0x84
    func_001390a8();  // 0x138fb8                                // 0x00140f90: jal 0x138fb8
    s2 = 0x21 << 16;                                            // 0x00140f94: lui $s2, 0x21
    v0 = -0x40;                                                 // 0x00140f98: addiu $v0, $zero, -0x40
    v1 = g_00210084;  // Global at 0x00210084                   // 0x00140f9c: lw $v1, 0($s3)
    a0 = 0x880;                                                 // 0x00140fa0: addiu $a0, $zero, 0x880
    s0 = s0 & v0;                                               // 0x00140fa4: and $s0, $s0, $v0
    s1 = 0x21 << 16;                                            // 0x00140fa8: lui $s1, 0x21
    g_00210314 = a0;  // Global at 0x00210314                   // 0x00140fac: sw $a0, 0x314($s2)
    if (v1 != 0) goto label_0x140ff8;                           // 0x00140fb0: bnez $v1, 0x140ff8
    g_00210080 = s0;  // Global at 0x00210080                   // 0x00140fb4: sw $s0, 0x80($s1)
    func_0011b5e0();  // 0x11b570                                // 0x00140fb8: jal 0x11b570
    a0 = 0x8d0;                                                 // 0x00140fbc: addiu $a0, $zero, 0x8d0
    if (v0 != 0) goto label_0x140ff8;                           // 0x00140fc0: bnez $v0, 0x140ff8
    g_00210084 = v0;  // Global at 0x00210084                   // 0x00140fc4: sw $v0, 0($s3)
    a0 = 0x22 << 16;                                            // 0x00140fc8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00140fcc: jal 0x116508
    a0 = &str_00226378;  // "E0100302: SJX_Init can't create DTX\n" // 0x00140fd0: addiu $a0, $a0, 0x6378
    /* nop */                                                   // 0x00140fd4: nop 
label_0x140fd8:
    /* nop */                                                   // 0x00140fd8: nop 
    /* nop */                                                   // 0x00140fdc: nop 
    /* nop */                                                   // 0x00140fe0: nop 
    /* nop */                                                   // 0x00140fe4: nop 
    /* nop */                                                   // 0x00140fe8: nop 
    goto label_0x140fd8;                                        // 0x00140fec: b 0x140fd8
    /* nop */                                                   // 0x00140ff0: nop 
    /* nop */                                                   // 0x00140ff4: nop 
label_0x140ff8:
    v0 = g_00210084;  // Global at 0x00210084                   // 0x00140ff8: lw $v0, 0x84($s4)
    v1 = -0x40;                                                 // 0x00140ffc: addiu $v1, $zero, -0x40
    a1 = g_00210080;  // Global at 0x00210080                   // 0x00141000: lw $a1, 0x80($s1)
    t0 = 0x21 << 16;                                            // 0x00141004: lui $t0, 0x21
    v0 = v0 + 0x40;                                             // 0x00141008: addiu $v0, $v0, 0x40
    a3 = g_00210314;  // Global at 0x00210314                   // 0x0014100c: lw $a3, 0x314($s2)
    v0 = v0 & v1;                                               // 0x00141010: and $v0, $v0, $v1
    g_00210088 = v0;  // Global at 0x00210088                   // 0x0014101c: sw $v0, 0x88($t0)
    func_00138dd0();  // 0x138c38                                // 0x00141020: jal 0x138c38
    s0 = 0x21 << 16;                                            // 0x00141024: lui $s0, 0x21
    if (v0 != 0) goto label_0x141060;                           // 0x00141028: bnez $v0, 0x141060
    g_00210310 = v0;  // Global at 0x00210310                   // 0x0014102c: sw $v0, 0x310($s0)
    a0 = 0x22 << 16;                                            // 0x00141030: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00141034: jal 0x116508
    a0 = &str_002263a8;  // "E0100401: can't create SJX of IOP\n" // 0x00141038: addiu $a0, $a0, 0x63a8
    /* nop */                                                   // 0x0014103c: nop 
label_0x141040:
    /* nop */                                                   // 0x00141040: nop 
    /* nop */                                                   // 0x00141044: nop 
    /* nop */                                                   // 0x00141048: nop 
    /* nop */                                                   // 0x0014104c: nop 
    /* nop */                                                   // 0x00141050: nop 
    goto label_0x141040;                                        // 0x00141054: b 0x141040
    /* nop */                                                   // 0x00141058: nop 
    /* nop */                                                   // 0x0014105c: nop 
label_0x141060:
    s0 = s0 + 0x310;                                            // 0x00141060: addiu $s0, $s0, 0x310
    a1 = 0x14 << 16;                                            // 0x00141064: lui $a1, 0x14
    a0 = g_00210310;  // Global at 0x00210310                   // 0x00141068: lw $a0, 0($s0)
    a1 = a1 + 0xbd8;                                            // 0x0014106c: addiu $a1, $a1, 0xbd8
    func_00138e48();  // 0x138e38                                // 0x00141070: jal 0x138e38
    a1 = 0x14 << 16;                                            // 0x00141078: lui $a1, 0x14
    a0 = g_00210310;  // Global at 0x00210310                   // 0x0014107c: lw $a0, 0($s0)
    a1 = a1 + 0xc78;                                            // 0x00141080: addiu $a1, $a1, 0xc78
    func_00138e58();  // 0x138e48                                // 0x00141084: jal 0x138e48
    a0 = 3;                                                     // 0x0014108c: addiu $a0, $zero, 3
    func_00139228();  // 0x139120                                // 0x0014109c: jal 0x139120
label_0x1410a4:
    v1 = s5 + 0x7c;                                             // 0x001410a4: addiu $v1, $s5, 0x7c
    v0 = g_0021007c;  // Global at 0x0021007c                   // 0x001410ac: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x001410b8: addiu $v0, $v0, 1
    g_0021007c = v0;  // Global at 0x0021007c                   // 0x001410cc: sw $v0, 0($v1)
    return;                                                     // 0x001410d0: jr $ra
    sp = sp + 0x40;                                             // 0x001410d4: addiu $sp, $sp, 0x40
}