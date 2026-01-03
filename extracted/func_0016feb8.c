void func_0016feb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0016feb8: addiu $sp, $sp, -0x30
    s0 = *(int32_t*)((s1) + 0x1b30);                            // 0x0016fed0: lw $s0, 0x1b30($s1)
    func_0016ff28();  // 16ff28                                // 0x0016fed4: jal 0x16ff28
    /* bnezl $v0, 0x16ff18 */                                   // 0x0016fedc: bnezl $v0, 0x16ff18
    v0 = 2;                                                     // 0x0016fee4: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x74) = v0;                             // 0x0016fee8: sw $v0, 0x74($s0)
    v1 = local_0;                                               // 0x0016feec: lw $v1, 0($sp)
    if (v1 == 0) goto label_0x16ff08;                           // 0x0016fef0: beqz $v1, 0x16ff08
    func_001752e8();  // 1752e8                                // 0x0016fef8: jal 0x1752e8
    a1 = 0x30;                                                  // 0x0016fefc: addiu $a1, $zero, 0x30
    /* bnezl $v0, 0x16ff0c */                                   // 0x0016ff00: bnezl $v0, 0x16ff0c
    v0 = 0xc8;                                                  // 0x0016ff04: addiu $v0, $zero, 0xc8
label_0x16ff08:
    v0 = 0xc0;                                                  // 0x0016ff08: addiu $v0, $zero, 0xc0
    *(uint32_t*)((s0) + 0x78) = v0;                             // 0x0016ff0c: sw $v0, 0x78($s0)
    return;                                                     // 0x0016ff20: jr $ra
    sp = sp + 0x30;                                             // 0x0016ff24: addiu $sp, $sp, 0x30
}