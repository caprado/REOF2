void func_001507f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001507f0: addiu $sp, $sp, -0x20
    func_00155b20();  // 0x155af8                                // 0x00150804: jal 0x155af8
    if (v0 == 0) goto label_0x150838;                           // 0x00150810: beqz $v0, 0x150838
    a1 = 0xff03 << 16;                                          // 0x00150818: lui $a1, 0xff03
    a1 = a1 | 0x20c;                                            // 0x00150824: ori $a1, $a1, 0x20c
    return func_00150380();  // Tail call                        // 0x0015082c: j 0x150330
    sp = sp + 0x20;                                             // 0x00150830: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00150834: nop 
label_0x150838:
    func_00150ac0();  // 0x150900                                // 0x00150838: jal 0x150900
    goto label_0x150858;                                        // 0x00150850: j 0x150858
    sp = sp + 0x20;                                             // 0x00150854: addiu $sp, $sp, 0x20
label_0x150858:
    v0 = a0 + 0x128;                                            // 0x00150858: addiu $v0, $a0, 0x128
    a0 = a0 + 0x58;                                             // 0x0015085c: addiu $a0, $a0, 0x58
    v1 = *(int32_t*)((v0) + 0x2c4);                             // 0x00150860: lw $v1, 0x2c4($v0)
    *(uint32_t*)(a0) = v1;                                      // 0x00150864: sw $v1, 0($a0)
    a1 = *(int32_t*)((v0) + 0x2c8);                             // 0x00150868: lw $a1, 0x2c8($v0)
    *(uint32_t*)((a0) + 4) = a1;                                // 0x0015086c: sw $a1, 4($a0)
    v1 = *(int32_t*)((v0) + 0x2cc);                             // 0x00150870: lw $v1, 0x2cc($v0)
    *(uint32_t*)((a0) + 8) = v1;                                // 0x00150874: sw $v1, 8($a0)
    a1 = *(int32_t*)((v0) + 0x2d0);                             // 0x00150878: lw $a1, 0x2d0($v0)
    *(uint32_t*)((a0) + 0xc) = a1;                              // 0x0015087c: sw $a1, 0xc($a0)
    v1 = *(int32_t*)((v0) + 0xdc);                              // 0x00150880: lw $v1, 0xdc($v0)
    a1 = *(int32_t*)((v0) + 0x10);                              // 0x00150884: lw $a1, 0x10($v0)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x00150888: sw $v1, 0x14($a0)
    *(uint32_t*)((a0) + 0x10) = a1;                             // 0x0015088c: sw $a1, 0x10($a0)
    v1 = *(int32_t*)((v0) + 0xbc);                              // 0x00150890: lw $v1, 0xbc($v0)
    a1 = *(int32_t*)((v0) + 0xe0);                              // 0x00150894: lw $a1, 0xe0($v0)
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x00150898: sw $v1, 0x1c($a0)
    *(uint32_t*)((a0) + 0x18) = a1;                             // 0x0015089c: sw $a1, 0x18($a0)
    v1 = *(int32_t*)((v0) + 0xc0);                              // 0x001508a0: lw $v1, 0xc0($v0)
    *(uint32_t*)((a0) + 0x20) = v1;                             // 0x001508a4: sw $v1, 0x20($a0)
    a1 = *(int32_t*)((v0) + 0xc4);                              // 0x001508a8: lw $a1, 0xc4($v0)
    *(uint32_t*)((a0) + 0x24) = a1;                             // 0x001508ac: sw $a1, 0x24($a0)
    v1 = *(int32_t*)((v0) + 0xc8);                              // 0x001508b0: lw $v1, 0xc8($v0)
    *(uint32_t*)((a0) + 0x28) = v1;                             // 0x001508b4: sw $v1, 0x28($a0)
    a1 = *(int32_t*)((v0) + 0xcc);                              // 0x001508b8: lw $a1, 0xcc($v0)
    *(uint32_t*)((a0) + 0x2c) = a1;                             // 0x001508bc: sw $a1, 0x2c($a0)
    v1 = *(int32_t*)((v0) + 0x4f4);                             // 0x001508c0: lw $v1, 0x4f4($v0)
    *(uint32_t*)((a0) + 0x30) = v1;                             // 0x001508c4: sw $v1, 0x30($a0)
    a1 = *(int32_t*)((v0) + 0x4e4);                             // 0x001508c8: lw $a1, 0x4e4($v0)
    *(uint32_t*)((a0) + 0x34) = a1;                             // 0x001508cc: sw $a1, 0x34($a0)
    v1 = *(int32_t*)((v0) + 0x118);                             // 0x001508d0: lw $v1, 0x118($v0)
    a1 = *(int32_t*)((v0) + 0x4c);                              // 0x001508d4: lw $a1, 0x4c($v0)
    a2 = *(int32_t*)((v0) + 0x13c);                             // 0x001508d8: lw $a2, 0x13c($v0)
    *(uint32_t*)((a0) + 0x38) = v1;                             // 0x001508dc: sw $v1, 0x38($a0)
    *(uint32_t*)((a0) + 0x3c) = a1;                             // 0x001508e0: sw $a1, 0x3c($a0)
    *(uint32_t*)((a0) + 0x40) = a2;                             // 0x001508e4: sw $a2, 0x40($a0)
    v1 = *(int32_t*)((v0) + 0x11c);                             // 0x001508e8: lw $v1, 0x11c($v0)
    *(uint32_t*)((a0) + 0x44) = v1;                             // 0x001508ec: sw $v1, 0x44($a0)
    a1 = *(int32_t*)((v0) + 0x134);                             // 0x001508f0: lw $a1, 0x134($v0)
    return;                                                     // 0x001508f4: jr $ra
    *(uint32_t*)((a0) + 0x48) = a1;                             // 0x001508f8: sw $a1, 0x48($a0)
}