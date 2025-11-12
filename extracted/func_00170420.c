void func_00170420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00170420: addiu $sp, $sp, -0x60
    func_00169ba0();  // 0x169b88                                // 0x00170458: jal 0x169b88
    s3 = *(int32_t*)((s0) + 0x1b30);                            // 0x00170460: lw $s3, 0x1b30($s0)
    v0 = *(int32_t*)((s3) + 0x138);                             // 0x00170464: lw $v0, 0x138($s3)
    s0 = s3 + 0x13c;                                            // 0x00170468: addiu $s0, $s3, 0x13c
    if (v0 <= 0) goto label_0x1704b4;                           // 0x0017046c: blez $v0, 0x1704b4
    *(uint32_t*)(s7) = 0;                                       // 0x00170470: sw $zero, 0($s7)
    s6 = 2;                                                     // 0x00170478: addiu $s6, $zero, 2
    s5 = 4;                                                     // 0x0017047c: addiu $s5, $zero, 4
label_0x170480:
    v0 = *(int32_t*)(s0);                                       // 0x00170480: lw $v0, 0($s0)
    if (v0 == s6) goto label_0x170498;                          // 0x00170484: beq $v0, $s6, 0x170498
    if (v0 != s5) goto label_0x1704ac;                          // 0x0017048c: bnel $v0, $s5, 0x1704ac
    s1 = s1 + -1;                                               // 0x00170490: addiu $s1, $s1, -1
label_0x170498:
    func_00170660();  // 0x170640                                // 0x00170498: jal 0x170640
    s4 = s4 + 1;                                                // 0x001704a0: addiu $s4, $s4, 1
    if (v0 != 0) s2 = s0;                                       // 0x001704a4: movn $s2, $s0, $v0
    s1 = s1 + -1;                                               // 0x001704a8: addiu $s1, $s1, -1
label_0x1704ac:
    if (s1 != 0) goto label_0x170480;                           // 0x001704ac: bnez $s1, 0x170480
    s0 = s0 + 0x80;                                             // 0x001704b0: addiu $s0, $s0, 0x80
label_0x1704b4:
    v0 = 1;                                                     // 0x001704b4: addiu $v0, $zero, 1
    if (s4 != v0) goto label_0x1704cc;                          // 0x001704b8: bne $s4, $v0, 0x1704cc
    /* nop */                                                   // 0x001704bc: nop 
    v0 = *(int32_t*)((s3) + 0x7c);                              // 0x001704c0: lw $v0, 0x7c($s3)
    /* bnezl $v0, 0x1704cc */                                   // 0x001704c4: bnezl $v0, 0x1704cc
    *(uint32_t*)(s7) = s4;                                      // 0x001704c8: sw $s4, 0($s7)
label_0x1704cc:
    func_00169bc8();  // 0x169ba0                                // 0x001704cc: jal 0x169ba0
    return;                                                     // 0x001704fc: jr $ra
    sp = sp + 0x60;                                             // 0x00170500: addiu $sp, $sp, 0x60
}