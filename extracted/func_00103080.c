void func_00103080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a0 < (unsigned)0xa) ? 1 : 0;                // 0x00103080: sltiu $v0, $a0, 0xa
    if (v0 == 0) return;  // Branch to 0x1030a0                 // 0x00103084: beqz $v0, 0x1030a0
    v0 = 0x1f << 16;                                            // 0x00103088: lui $v0, 0x1f
    v1 = a0 << 2;                                               // 0x0010308c: sll $v1, $a0, 2
    v0 = v0 + -0x538;                                           // 0x00103090: addiu $v0, $v0, -0x538
    v1 = v1 + v0;                                               // 0x00103094: addu $v1, $v1, $v0
    return;                                                     // 0x00103098: jr $ra
    v0 = *(int32_t*)(v1);                                       // 0x0010309c: lw $v0, 0($v1)
}