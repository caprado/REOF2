void func_00181618() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00181618: addiu $sp, $sp, -0x50
    v0 = 0x21 << 16;                                            // 0x0018161c: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x0018162c: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x181650;                           // 0x0018163c: bnez $v1, 0x181650
    v0 = 0x8101 << 16;                                          // 0x00181644: lui $v0, 0x8101
    goto label_0x1816f4;                                        // 0x00181648: b 0x1816f4
    v0 = v0 | 0x8001;                                           // 0x0018164c: ori $v0, $v0, 0x8001
label_0x181650:
    func_00188758();  // 188758                                // 0x00181650: jal 0x188758
    if (s0 >= 0) goto label_0x181670;                           // 0x0018165c: bgez $s0, 0x181670
    /* nop */                                                   // 0x00181660: nop 
    v0 = 0x8101 << 16;                                          // 0x00181664: lui $v0, 0x8101
    goto label_0x1816f4;                                        // 0x00181668: b 0x1816f4
    v0 = v0 | 0x8002;                                           // 0x0018166c: ori $v0, $v0, 0x8002
label_0x181670:
    func_0010ae00();  // 10ae00                                // 0x00181670: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x00181678: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x181690;                           // 0x0018167c: bnez $v0, 0x181690
    s2 = 0x27 << 16;                                            // 0x00181680: lui $s2, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181684: lui $v0, 0x8101
    goto label_0x1816f4;                                        // 0x00181688: b 0x1816f4
    v0 = v0 | 0x5b;                                             // 0x0018168c: ori $v0, $v0, 0x5b
label_0x181690:
    PollSema();  // 0x114320                                    // 0x00181690: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181694: lw $a0, -0x4e54($s2)
    v1 = 0x27 << 16;                                            // 0x00181698: lui $v1, 0x27
    s1 = v1 + -0x5380;                                          // 0x0018169c: addiu $s1, $v1, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x001816a0: lw $v0, 4($s1)
    /* beqzl $v0, 0x1816c0 */                                   // 0x001816a4: beqzl $v0, 0x1816c0
    v0 = 0xb;                                                   // 0x001816a8: addiu $v0, $zero, 0xb
    iSignalSema();  // 0x114300                                 // 0x001816ac: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001816b0: lw $a0, -0x4e54($s2)
    v0 = 0x8101 << 16;                                          // 0x001816b4: lui $v0, 0x8101
    goto label_0x1816f4;                                        // 0x001816b8: b 0x1816f4
    v0 = v0 | 0x10;                                             // 0x001816bc: ori $v0, $v0, 0x10
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x001816c0: sw $s0, -0x5380($v1)
    g_0026ac84 = v0;  // Global at 0x0026ac84                   // 0x001816c4: sw $v0, 4($s1)
    func_0010ac68();  // 10ac68                                // 0x001816cc: jal 0x10ac68
    a0 = s1 + 0x41c;                                            // 0x001816d0: addiu $a0, $s1, 0x41c
    v1 = 0x27 << 16;                                            // 0x001816d4: lui $v1, 0x27
    v0 = 0 | 0x8427;                                            // 0x001816d8: ori $v0, $zero, 0x8427
    a0 = g_0026b1a4;  // Global at 0x0026b1a4                   // 0x001816dc: lw $a0, -0x4e5c($v1)
    iSignalSema();  // 0x114300                                 // 0x001816e0: jal 0x114300
    g_0026ac8c = v0;  // Global at 0x0026ac8c                   // 0x001816e4: sw $v0, 0xc($s1)
    iSignalSema();  // 0x114300                                 // 0x001816e8: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001816ec: lw $a0, -0x4e54($s2)
label_0x1816f4:
    return;                                                     // 0x00181708: jr $ra
    sp = sp + 0x50;                                             // 0x0018170c: addiu $sp, $sp, 0x50
}