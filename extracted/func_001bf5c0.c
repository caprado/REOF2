void func_001bf5c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf5c0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf5c4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf5d0: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf644;                          // 0x001bf5d4: beq $v1, $v0, 0x1bf644
    if (v1 == 0) goto label_0x1bf5ec;                           // 0x001bf5dc: beqz $v1, 0x1bf5ec
    /* nop */                                                   // 0x001bf5e0: nop 
    goto label_0x1bf668;                                        // 0x001bf5e4: b 0x1bf668
    v0 = -1;                                                    // 0x001bf5e8: addiu $v0, $zero, -1
label_0x1bf5ec:
    func_001befe0();  // 1befe0                                // 0x001bf5ec: jal 0x1befe0
    /* nop */                                                   // 0x001bf5f0: nop 
    if (v0 < 0) goto label_0x1bf664;                            // 0x001bf5f4: bltz $v0, 0x1bf664
    /* nop */                                                   // 0x001bf5f8: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf5fc: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf600: addiu $v0, $gp, -0x6300
    t0 = *(int32_t*)((s0) + 0xbc);                              // 0x001bf604: lw $t0, 0xbc($s0)
    a1 = s0 + 0x72;                                             // 0x001bf608: addiu $a1, $s0, 0x72
    a2 = *(int32_t*)((s0) + 0xd0);                              // 0x001bf60c: lw $a2, 0xd0($s0)
    v1 = v1 << 2;                                               // 0x001bf610: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf614: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf618: lw $a0, 0($v0)
    func_001811e8();  // 1811e8                                // 0x001bf61c: jal 0x1811e8
    if (v0 >= 0) goto label_0x1bf634;                           // 0x001bf624: bgez $v0, 0x1bf634
    /* nop */                                                   // 0x001bf628: nop 
    goto label_0x1bf668;                                        // 0x001bf62c: b 0x1bf668
    v0 = 1;                                                     // 0x001bf630: addiu $v0, $zero, 1
label_0x1bf634:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf634: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf638: addiu $v0, $v0, 1
    goto label_0x1bf664;                                        // 0x001bf63c: b 0x1bf664
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf640: sw $v0, 4($s0)
label_0x1bf644:
    func_001befe0();  // 1befe0                                // 0x001bf644: jal 0x1befe0
    /* nop */                                                   // 0x001bf648: nop 
    if (v0 < 0) goto label_0x1bf664;                            // 0x001bf64c: bltz $v0, 0x1bf664
    /* nop */                                                   // 0x001bf650: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf654: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf658: lw $v0, 0x1c($s0)
    goto label_0x1bf668;                                        // 0x001bf65c: b 0x1bf668
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf660: slt $v0, $v0, $zero
label_0x1bf664:
    v0 = -1;                                                    // 0x001bf664: addiu $v0, $zero, -1
label_0x1bf668:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf66c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf670: jr $ra
    sp = sp + 0x20;                                             // 0x001bf674: addiu $sp, $sp, 0x20
}