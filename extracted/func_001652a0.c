void func_001652a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001652a0: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b7c);                            // 0x001652a8: lw $a1, 0x1b7c($a0)
    return func_001679e0();  // Tail call                        // 0x001652b0: j 0x1679c0
    sp = sp + 0x10;                                             // 0x001652b4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001652b8: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b80);                            // 0x001652c0: lw $a1, 0x1b80($a0)
    return func_001679e0();  // Tail call                        // 0x001652c8: j 0x1679c0
    sp = sp + 0x10;                                             // 0x001652cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001652d0: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b80);                            // 0x001652dc: lw $a1, 0x1b80($a0)
    return func_001679c0();  // Tail call                        // 0x001652e4: j 0x1679a0
    sp = sp + 0x10;                                             // 0x001652e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001652ec: nop 
    sp = sp + -0x20;                                            // 0x001652f0: addiu $sp, $sp, -0x20
    func_00165e18();  // 0x165de8                                // 0x00165300: jal 0x165de8
    /* beqzl $s1, 0x165394 */                                   // 0x0016530c: beqzl $s1, 0x165394
    v0 = *(int32_t*)(s1);                                       // 0x00165314: lw $v0, 0($s1)
    /* bnezl $v0, 0x165394 */                                   // 0x00165318: bnezl $v0, 0x165394
    v0 = *(int32_t*)((s0) + 0x1b74);                            // 0x00165320: lw $v0, 0x1b74($s0)
    s0 = *(int32_t*)(v0);                                       // 0x00165324: lw $s0, 0($v0)
    func_001653d0();  // 0x1653a8                                // 0x00165328: jal 0x1653a8
    if (v0 == 0) goto label_0x165390;                           // 0x00165330: beqz $v0, 0x165390
    func_00132208();  // 0x1321b8                                // 0x00165338: jal 0x1321b8
    /* nop */                                                   // 0x0016533c: nop 
    func_001321b8();  // 0x132168                                // 0x00165344: jal 0x132168
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00165348: sw $v0, 0x10($s1)
    func_00132258();  // 0x132208                                // 0x00165350: jal 0x132208
    *(uint32_t*)((s1) + 0x14) = v0;                             // 0x00165354: sw $v0, 0x14($s1)
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x00165358: lw $a0, 0x10($s1)
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x0016535c: sw $v0, 0xc($s1)
    v1 = 1;                                                     // 0x00165360: addiu $v1, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x00165368: sw $v1, 0($s1)
    *(uint32_t*)((s1) + 8) = v1;                                // 0x0016536c: sw $v1, 8($s1)
    v0 = a0 << 3;                                               // 0x00165370: sll $v0, $a0, 3
    v0 = v0 + a0;                                               // 0x00165374: addu $v0, $v0, $a0
    a0 = v0 + 0xf;                                              // 0x0016537c: addiu $a0, $v0, 0xf
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00165380: slti $v0, $v0, 0
    if (v0 != 0) v1 = a0;                                       // 0x00165384: movn $v1, $a0, $v0
    v1 = v1 >> 4;                                               // 0x00165388: sra $v1, $v1, 4
    *(uint32_t*)((s1) + 4) = v1;                                // 0x0016538c: sw $v1, 4($s1)
label_0x165390:
    return;                                                     // 0x0016539c: jr $ra
    sp = sp + 0x20;                                             // 0x001653a0: addiu $sp, $sp, 0x20
}