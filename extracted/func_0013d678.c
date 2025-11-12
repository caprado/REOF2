void func_0013d678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013d678: addiu $sp, $sp, -0x20
    a2 = 1;                                                     // 0x0013d67c: addiu $a2, $zero, 1
    v0 = *(int8_t*)((s0) + 4);                                  // 0x0013d694: lb $v0, 4($s0)
    if (v0 == a2) goto label_0x13d730;                          // 0x0013d698: beq $v0, $a2, 0x13d730
    v0 = 2;                                                     // 0x0013d69c: addiu $v0, $zero, 2
    s2 = *(int8_t*)((s0) + 1);                                  // 0x0013d6a0: lb $s2, 1($s0)
    if (s2 != v0) goto label_0x13d734;                          // 0x0013d6a4: bnel $s2, $v0, 0x13d734
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0013d6ac: lw $v0, 0x24($s0)
    if (v0 <= 0) goto label_0x13d734;                           // 0x0013d6b0: blezl $v0, 0x13d734
    a1 = *(int32_t*)((s0) + 0x20);                              // 0x0013d6b8: lw $a1, 0x20($s0)
    s1 = s0 + 0x10;                                             // 0x0013d6bc: addiu $s1, $s0, 0x10
    v0 = a1 << 5;                                               // 0x0013d6c0: sll $v0, $a1, 5
    v0 = v0 + s1;                                               // 0x0013d6c4: addu $v0, $v0, $s1
    v1 = *(int32_t*)((v0) + 0x40);                              // 0x0013d6c8: lw $v1, 0x40($v0)
    if (v1 != a2) goto label_0x13d6e4;                          // 0x0013d6cc: bne $v1, $a2, 0x13d6e4
    v0 = a1 << 5;                                               // 0x0013d6d0: sll $v0, $a1, 5
    func_0013d570();  // 0x13d4c0                                // 0x0013d6d4: jal 0x13d4c0
    /* nop */                                                   // 0x0013d6d8: nop 
    a1 = *(int32_t*)((s0) + 0x20);                              // 0x0013d6dc: lw $a1, 0x20($s0)
    v0 = a1 << 5;                                               // 0x0013d6e0: sll $v0, $a1, 5
label_0x13d6e4:
    v0 = v0 + s1;                                               // 0x0013d6e4: addu $v0, $v0, $s1
    v1 = *(int32_t*)((v0) + 0x40);                              // 0x0013d6e8: lw $v1, 0x40($v0)
    if (v1 != s2) goto label_0x13d704;                          // 0x0013d6ec: bne $v1, $s2, 0x13d704
    v0 = a1 << 5;                                               // 0x0013d6f0: sll $v0, $a1, 5
    func_0013d678();  // 0x13d570                                // 0x0013d6f4: jal 0x13d570
    a1 = *(int32_t*)((s0) + 0x20);                              // 0x0013d6fc: lw $a1, 0x20($s0)
    v0 = a1 << 5;                                               // 0x0013d700: sll $v0, $a1, 5
label_0x13d704:
    v0 = v0 + s1;                                               // 0x0013d704: addu $v0, $v0, $s1
    v1 = *(int32_t*)((v0) + 0x40);                              // 0x0013d708: lw $v1, 0x40($v0)
    /* bnezl $v1, 0x13d734 */                                   // 0x0013d70c: bnezl $v1, 0x13d734
    return func_0013d4c0();  // Tail call                        // 0x0013d728: j 0x13d398
    sp = sp + 0x20;                                             // 0x0013d72c: addiu $sp, $sp, 0x20
label_0x13d730:
label_0x13d734:
    return;                                                     // 0x0013d740: jr $ra
    sp = sp + 0x20;                                             // 0x0013d744: addiu $sp, $sp, 0x20
}