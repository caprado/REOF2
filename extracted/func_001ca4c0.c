void func_001ca4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ca4c0: addiu $sp, $sp, -0x20
    func_001ca280();  // 1ca280                                // 0x001ca4cc: jal 0x1ca280
    *(uint32_t*)(s0) = v0;                                      // 0x001ca4d4: sw $v0, 0($s0)
    v0 = *(int32_t*)(s0);                                       // 0x001ca4d8: lw $v0, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca4e0: xori.b $w0, $w0, 0xb0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001ca4e4: sltu $v0, $zero, $v0
    return;                                                     // 0x001ca4e8: jr $ra
    sp = sp + 0x20;                                             // 0x001ca4ec: addiu $sp, $sp, 0x20
}