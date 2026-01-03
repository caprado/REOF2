void func_00179768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179768: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0017977c: lw $v0, 4($a0)
    func_00178f58();  // 178f58                                // 0x00179780: jal 0x178f58
    s0 = v0 + 0xb0;                                             // 0x00179784: addiu $s0, $v0, 0xb0
    /* beqzl $v0, 0x1797a0 */                                   // 0x00179788: beqzl $v0, 0x1797a0
    v1 = *(uint8_t*)((s0) + 2);                                 // 0x00179790: lbu $v1, 2($s0)
    v0 = 1;                                                     // 0x00179794: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x00179798: sw $v1, 0($s1)
    return;                                                     // 0x001797a8: jr $ra
    sp = sp + 0x20;                                             // 0x001797ac: addiu $sp, $sp, 0x20
}