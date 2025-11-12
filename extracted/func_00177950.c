void func_00177950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 4;                                               // 0x00177950: sll $v0, $a1, 4
    v0 = v0 + a1;                                               // 0x00177954: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00177958: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x0017795c: addu $a0, $a0, $v0
    v0 = *(int32_t*)((a0) + 0x1aac);                            // 0x00177960: lw $v0, 0x1aac($a0)
    return;                                                     // 0x00177964: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00177968: sltu $v0, $zero, $v0
}