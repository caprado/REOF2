void func_00135318() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00135318: addiu $sp, $sp, -0x40
    if (s2 != 0) goto label_0x135380;                           // 0x00135338: bnez $s2, 0x135380
    a0 = 0x22 << 16;                                            // 0x00135340: lui $a0, 0x22
    a0 = &str_002240a8;  // "cvFsSetDefDev #1:illegal device name" // 0x0013534c: addiu $a0, $a0, 0x40a8
    return func_00134fb0();  // Tail call                        // 0x00135364: j 0x134ec0
    sp = sp + 0x40;                                             // 0x00135368: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x0013536c: nop 
label_0x135370:
    v0 = s5 + -4;                                               // 0x00135370: addiu $v0, $s5, -4
    v0 = s3 + v0;                                               // 0x00135374: addu $v0, $s3, $v0
    goto label_0x1353c8;                                        // 0x00135378: b 0x1353c8
    g_00250004 = 0;  // Global at 0x00250004                    // 0x0013537c: sb $zero, 4($v0)
label_0x135380:
    func_0010af38();  // 0x10ae00                                // 0x00135380: jal 0x10ae00
    v0 = 0x25 << 16;                                            // 0x0013538c: lui $v0, 0x25
    s1 = v0 + 0x37ec;                                           // 0x00135390: addiu $s1, $v0, 0x37ec
    /* nop */                                                   // 0x0013539c: nop 
label_0x1353a0:
    s1 = s1 + 0x10;                                             // 0x001353a0: addiu $s1, $s1, 0x10
    s3 = s0 << 4;                                               // 0x001353ac: sll $s3, $s0, 4
    func_0010b2a0();  // 0x10b0e8                                // 0x001353b0: jal 0x10b0e8
    s0 = s0 + 1;                                                // 0x001353b4: addiu $s0, $s0, 1
    if (v0 == 0) goto label_0x135370;                           // 0x001353b8: beqz $v0, 0x135370
    v1 = ((unsigned)s0 < (unsigned)0x20) ? 1 : 0;               // 0x001353bc: sltiu $v1, $s0, 0x20
    if (v1 != 0) goto label_0x1353a0;                           // 0x001353c0: bnez $v1, 0x1353a0
label_0x1353c8:
    return;                                                     // 0x001353e4: jr $ra
    sp = sp + 0x40;                                             // 0x001353e8: addiu $sp, $sp, 0x40
}