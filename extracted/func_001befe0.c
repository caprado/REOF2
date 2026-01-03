void func_001befe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001befe4: addiu $sp, $sp, -0x10
    a0 = v0 + 0x18;                                             // 0x001befec: addiu $a0, $v0, 0x18
    func_00181dd8();  // 181dd8                                // 0x001beff0: jal 0x181dd8
    a1 = v0 + 0x1c;                                             // 0x001beff4: addiu $a1, $v0, 0x1c
    v0 = v0 ^ 0;                                                // 0x001beffc: xor $v0, $v0, $zero
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001bf000: sltiu $v0, $v0, 1
    v0 = -v0;                                                   // 0x001bf004: negu $v0, $v0
    return;                                                     // 0x001bf008: jr $ra
    sp = sp + 0x10;                                             // 0x001bf00c: addiu $sp, $sp, 0x10
}