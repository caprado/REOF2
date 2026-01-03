void func_0016c378() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016c378: addiu $sp, $sp, -0x20
    func_00170250();  // 170250                                // 0x0016c390: jal 0x170250
    s2 = s0 + 0x94c;                                            // 0x0016c394: addiu $s2, $s0, 0x94c
    v0 = -1;                                                    // 0x0016c39c: addiu $v0, $zero, -1
    if (s1 == v0) goto label_0x16c3cc;                          // 0x0016c3a0: beq $s1, $v0, 0x16c3cc
    func_00170230();  // 170230                                // 0x0016c3a8: jal 0x170230
    /* nop */                                                   // 0x0016c3ac: nop 
    if (v0 == 0) goto label_0x16c408;                           // 0x0016c3b0: beqz $v0, 0x16c408
    v1 = 1;                                                     // 0x0016c3b4: addiu $v1, $zero, 1
    if (s1 != v1) goto label_0x16c40c;                          // 0x0016c3b8: bnel $s1, $v1, 0x16c40c
    v0 = *(int32_t*)((s2) + 0x14);                              // 0x0016c3c0: lw $v0, 0x14($s2)
    /* beqzl $v0, 0x16c40c */                                   // 0x0016c3c4: beqzl $v0, 0x16c40c
label_0x16c3cc:
    func_0016c420();  // 16c420                                // 0x0016c3d0: jal 0x16c420
    a1 = 1;                                                     // 0x0016c3d4: addiu $a1, $zero, 1
    v0 = *(int32_t*)(s2);                                       // 0x0016c3dc: lw $v0, 0($s2)
    a1 = 5;                                                     // 0x0016c3e0: addiu $a1, $zero, 5
    if (v0 != 0) goto label_0x16c408;                           // 0x0016c3e4: bnez $v0, 0x16c408
    return func_00175170();  // Tail call                        // 0x0016c3fc: j 0x175120
    sp = sp + 0x20;                                             // 0x0016c400: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016c404: nop 
label_0x16c408:
label_0x16c40c:
    return;                                                     // 0x0016c418: jr $ra
    sp = sp + 0x20;                                             // 0x0016c41c: addiu $sp, $sp, 0x20
}