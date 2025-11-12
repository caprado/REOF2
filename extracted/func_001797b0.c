void func_001797b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001797b0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001797c4: lw $v0, 4($a0)
    func_00178fa0();  // 0x178f58                                // 0x001797c8: jal 0x178f58
    s0 = v0 + 0xb0;                                             // 0x001797cc: addiu $s0, $v0, 0xb0
    /* beqzl $v0, 0x1797e8 */                                   // 0x001797d0: beqzl $v0, 0x1797e8
    v1 = *(uint8_t*)((s0) + 3);                                 // 0x001797d8: lbu $v1, 3($s0)
    v0 = 1;                                                     // 0x001797dc: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x001797e0: sw $v1, 0($s1)
    return;                                                     // 0x001797f0: jr $ra
    sp = sp + 0x20;                                             // 0x001797f4: addiu $sp, $sp, 0x20
}