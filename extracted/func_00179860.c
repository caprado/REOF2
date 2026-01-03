void func_00179860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179860: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00179874: lw $v0, 4($a0)
    func_00178f58();  // 178f58                                // 0x00179878: jal 0x178f58
    s0 = v0 + 0xb0;                                             // 0x0017987c: addiu $s0, $v0, 0xb0
    /* beqzl $v0, 0x179898 */                                   // 0x00179880: beqzl $v0, 0x179898
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00179888: lw $v1, 8($s0)
    v0 = 1;                                                     // 0x0017988c: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x00179890: sw $v1, 0($s1)
    return;                                                     // 0x001798a0: jr $ra
    sp = sp + 0x20;                                             // 0x001798a4: addiu $sp, $sp, 0x20
}