void func_001c75b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c75b0: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001c75b4: lui $at, 0x31
    v0 = g_00316620;  // Global at 0x00316620                   // 0x001c75bc: lh $v0, 0x6620($at)
    if (v0 == 0) goto label_0x1c75d8;                           // 0x001c75c0: beqz $v0, 0x1c75d8
    /* nop */                                                   // 0x001c75c4: nop 
    func_001c7670();  // 1c7670                                // 0x001c75c8: jal 0x1c7670
    /* nop */                                                   // 0x001c75cc: nop 
    goto label_0x1c7658;                                        // 0x001c75d0: b 0x1c7658
    /* nop */                                                   // 0x001c75d4: nop 
label_0x1c75d8:
    if (a1 >= 0) goto label_0x1c75f0;                           // 0x001c75dc: bgez $a1, 0x1c75f0
    a3 = a1 & 0xf;                                              // 0x001c75e0: andi $a3, $a1, 0xf
    if (a3 == 0) goto label_0x1c75f4;                           // 0x001c75e4: beqz $a3, 0x1c75f4
    v0 = 0x10;                                                  // 0x001c75e8: addiu $v0, $zero, 0x10
    a3 = a3 + -0x10;                                            // 0x001c75ec: addiu $a3, $a3, -0x10
label_0x1c75f0:
    v0 = 0x10;                                                  // 0x001c75f0: addiu $v0, $zero, 0x10
label_0x1c75f4:
    v1 = a2 & 0xf;                                              // 0x001c75f4: andi $v1, $a2, 0xf
    v0 = v0 - a3;                                               // 0x001c75f8: subu $v0, $v0, $a3
    if (a2 >= 0) goto label_0x1c7610;                           // 0x001c75fc: bgez $a2, 0x1c7610
    t0 = v0 + a1;                                               // 0x001c7600: addu $t0, $v0, $a1
    if (v1 == 0) goto label_0x1c7614;                           // 0x001c7604: beqz $v1, 0x1c7614
    v0 = 0x10;                                                  // 0x001c7608: addiu $v0, $zero, 0x10
    v1 = v1 + -0x10;                                            // 0x001c760c: addiu $v1, $v1, -0x10
label_0x1c7610:
    v0 = 0x10;                                                  // 0x001c7610: addiu $v0, $zero, 0x10
label_0x1c7614:
    v0 = v0 - v1;                                               // 0x001c7618: subu $v0, $v0, $v1
    a3 = 0x31 << 16;                                            // 0x001c761c: lui $a3, 0x31
    a0 = 0x31 << 16;                                            // 0x001c7620: lui $a0, 0x31
    t2 = v0 + a2;                                               // 0x001c7624: addu $t2, $v0, $a2
    a3 = a3 + 0x6680;                                           // 0x001c7628: addiu $a3, $a3, 0x6680
    a0 = a0 + 0x6630;                                           // 0x001c762c: addiu $a0, $a0, 0x6630
    func_001176a8();  // 1176a8                                // 0x001c7638: jal 0x1176a8
    if (v0 >= 0) goto label_0x1c7650;                           // 0x001c7640: bgez $v0, 0x1c7650
    at = 0x31 << 16;                                            // 0x001c7644: lui $at, 0x31
    goto label_0x1c7654;                                        // 0x001c7648: b 0x1c7654
    v0 = -0x21;                                                 // 0x001c764c: addiu $v0, $zero, -0x21
label_0x1c7650:
    v0 = g_00316698;  // Global at 0x00316698                   // 0x001c7650: lh $v0, 0x6698($at)
label_0x1c7654:
    /* nop */                                                   // 0x001c7654: nop 
label_0x1c7658:
    return;                                                     // 0x001c765c: jr $ra
    sp = sp + 0x20;                                             // 0x001c7660: addiu $sp, $sp, 0x20
}