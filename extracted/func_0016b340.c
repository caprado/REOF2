void func_0016b340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016b340: addiu $sp, $sp, -0x10
    func_0016b8a8();  // 0x16b858                                // 0x0016b34c: jal 0x16b858
    if (a1 == 0) goto label_0x16b3e4;                           // 0x0016b358: beqz $a1, 0x16b3e4
    v0 = 0x7fff << 16;                                          // 0x0016b35c: lui $v0, 0x7fff
    a2 = *(int32_t*)((s0) + 0x1aec);                            // 0x0016b360: lw $a2, 0x1aec($s0)
    v0 = v0 | 0xffff;                                           // 0x0016b364: ori $v0, $v0, 0xffff
    a3 = s0 + 0xcc0;                                            // 0x0016b368: addiu $a3, $s0, 0xcc0
    v1 = *(int32_t*)((a2) + 0x10);                              // 0x0016b36c: lw $v1, 0x10($a2)
    if (v1 == v0) goto label_0x16b3e4;                          // 0x0016b370: beq $v1, $v0, 0x16b3e4
    a0 = s0 + 0x90c;                                            // 0x0016b374: addiu $a0, $s0, 0x90c
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x0016b378: lw $v0, 0x18($a1)
    v0 = v1 - v0;                                               // 0x0016b37c: subu $v0, $v1, $v0
    *(uint32_t*)((a3) + 0x118) = v0;                            // 0x0016b380: sw $v0, 0x118($a3)
    v1 = *(int32_t*)(a1);                                       // 0x0016b384: lw $v1, 0($a1)
    if (v1 != 0) goto label_0x16b3e8;                           // 0x0016b388: bnez $v1, 0x16b3e8
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x0016b390: lw $v1, 0x18($a0)
    v0 = v1 << 1;                                               // 0x0016b394: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0016b398: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x0016b39c: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x0016b3a0: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x0016b3a4: sll $v0, $v0, 1
    *(uint32_t*)((a1) + 4) = v0;                                // 0x0016b3a8: sw $v0, 4($a1)
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0016b3ac: lw $v1, 0x1c($a0)
    *(uint32_t*)((a1) + 8) = v1;                                // 0x0016b3b0: sw $v1, 8($a1)
    v0 = *(int32_t*)((a2) + 4);                                 // 0x0016b3b4: lw $v0, 4($a2)
    *(uint32_t*)((a1) + 0xc) = v0;                              // 0x0016b3b8: sw $v0, 0xc($a1)
    v1 = *(int32_t*)((a2) + 8);                                 // 0x0016b3bc: lw $v1, 8($a2)
    *(uint32_t*)((a1) + 0x10) = v1;                             // 0x0016b3c0: sw $v1, 0x10($a1)
    v0 = *(int32_t*)((a3) + 0x114);                             // 0x0016b3c4: lw $v0, 0x114($a3)
    *(uint32_t*)((a1) + 0x14) = v0;                             // 0x0016b3c8: sw $v0, 0x14($a1)
    v1 = *(int32_t*)((a2) + 0xc);                               // 0x0016b3cc: lw $v1, 0xc($a2)
    *(uint32_t*)((a1) + 0x18) = v1;                             // 0x0016b3d0: sw $v1, 0x18($a1)
    v0 = *(int32_t*)((a2) + 0x20);                              // 0x0016b3d4: lw $v0, 0x20($a2)
    *(uint32_t*)((a1) + 0x1c) = v0;                             // 0x0016b3d8: sw $v0, 0x1c($a1)
    v1 = *(int32_t*)((a2) + 0x24);                              // 0x0016b3dc: lw $v1, 0x24($a2)
    *(uint32_t*)((a1) + 0x20) = v1;                             // 0x0016b3e0: sw $v1, 0x20($a1)
label_0x16b3e4:
label_0x16b3e8:
    return;                                                     // 0x0016b3ec: jr $ra
    sp = sp + 0x10;                                             // 0x0016b3f0: addiu $sp, $sp, 0x10
}