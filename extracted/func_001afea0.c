void func_001afea0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 >> 5;                                               // 0x001afea0: sra $v0, $a1, 5
    a2 = a1 & 0x1f;                                             // 0x001afea4: andi $a2, $a1, 0x1f
    v0 = v0 << 2;                                               // 0x001afea8: sll $v0, $v0, 2
    v1 = 1;                                                     // 0x001afeac: addiu $v1, $zero, 1
    v0 = a0 + v0;                                               // 0x001afeb0: addu $v0, $a0, $v0
    v1 = v1 << a2;                                              // 0x001afeb4: sllv $v1, $v1, $a2
    v0 = *(int32_t*)(v0);                                       // 0x001afeb8: lw $v0, 0($v0)
    v0 = v1 & v0;                                               // 0x001afebc: and $v0, $v1, $v0
    return;                                                     // 0x001afec0: jr $ra
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001afec4: sltu $v0, $zero, $v0
}