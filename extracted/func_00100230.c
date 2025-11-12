/** @category: core/entry @status: complete @author: caprado */
void func_00100230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00100230: addiu $sp, $sp, -0x10
    func_00111f90();  // 0x111f40                                // 0x00100238: jal 0x111f40
    /* nop */                                                   // 0x0010023c: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00100244: sltu $v0, $zero, $v0
    return;                                                     // 0x00100248: jr $ra
    sp = sp + 0x10;                                             // 0x0010024c: addiu $sp, $sp, 0x10
}