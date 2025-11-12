void func_001afed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a1 >> 5;                                               // 0x001afed0: sra $v1, $a1, 5
    a2 = a1 & 0x1f;                                             // 0x001afed4: andi $a2, $a1, 0x1f
    v1 = v1 << 2;                                               // 0x001afed8: sll $v1, $v1, 2
    a1 = 1;                                                     // 0x001afedc: addiu $a1, $zero, 1
    a0 = a0 + v1;                                               // 0x001afee0: addu $a0, $a0, $v1
    a1 = a1 << a2;                                              // 0x001afee4: sllv $a1, $a1, $a2
    v1 = *(int32_t*)(a0);                                       // 0x001afee8: lw $v1, 0($a0)
    v1 = v1 | a1;                                               // 0x001afeec: or $v1, $v1, $a1
    return;                                                     // 0x001afef0: jr $ra
    *(uint32_t*)(a0) = v1;                                      // 0x001afef4: sw $v1, 0($a0)
}