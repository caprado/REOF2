void func_00114ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114ae0: addiu $sp, $sp, -0x10
    func_001050b8();  // 0x104ef8                                // 0x00114ae8: jal 0x104ef8
    /* nop */                                                   // 0x00114aec: nop 
    v1 = 5;                                                     // 0x00114af0: addiu $v1, $zero, 5
    *(uint32_t*)(v0) = v1;                                      // 0x00114af8: sw $v1, 0($v0)
    v0 = -1;                                                    // 0x00114afc: addiu $v0, $zero, -1
    return;                                                     // 0x00114b00: jr $ra
    sp = sp + 0x10;                                             // 0x00114b04: addiu $sp, $sp, 0x10
}