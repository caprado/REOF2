void func_0017d730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x40;                                            // 0x0017d730: addiu $sp, $sp, -0x40
    a0 = a0 + 0x28;                                             // 0x0017d734: addiu $a0, $a0, 0x28
    v1 = 1;                                                     // 0x0017d74c: addiu $v1, $zero, 1
    v0 = *(int32_t*)(a0);                                       // 0x0017d750: lw $v0, 0($a0)
    if (v0 != v1) goto label_0x17d76c;                          // 0x0017d754: bnel $v0, $v1, 0x17d76c
    *(uint32_t*)(s0) = 0;                                       // 0x0017d758: sw $zero, 0($s0)
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0017d75c: lw $v1, 4($a0)
    /* bnezl $v1, 0x17d778 */                                   // 0x0017d760: bnezl $v1, 0x17d778
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0017d764: lw $v0, 8($a0)
    *(uint32_t*)(s0) = 0;                                       // 0x0017d768: sw $zero, 0($s0)
label_0x17d76c:
    goto label_0x17d79c;                                        // 0x0017d76c: b 0x17d79c
    *(uint32_t*)(s1) = 0;                                       // 0x0017d770: sw $zero, 0($s1)
    /* nop */                                                   // 0x0017d774: nop 
    a3 = sp + 0x10;                                             // 0x0017d77c: addiu $a3, $sp, 0x10
    local_0 = v1;                                               // 0x0017d780: sw $v1, 0($sp)
    func_001407b0();  // 0x1406e0                                // 0x0017d784: jal 0x1406e0
    local_4 = v0;                                               // 0x0017d788: sw $v0, 4($sp)
    v1 = local_10;                                              // 0x0017d78c: lw $v1, 0x10($sp)
    v0 = local_14;                                              // 0x0017d790: lw $v0, 0x14($sp)
    *(uint32_t*)(s0) = v1;                                      // 0x0017d794: sw $v1, 0($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x0017d798: sw $v0, 0($s1)
label_0x17d79c:
    return;                                                     // 0x0017d7a8: jr $ra
    sp = sp + 0x40;                                             // 0x0017d7ac: addiu $sp, $sp, 0x40
}