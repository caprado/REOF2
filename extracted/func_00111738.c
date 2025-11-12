void func_00111738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = *(int32_t*)(t3);                                       // 0x0011173c: lw $a3, 0($t3)
    v1 = ((unsigned)a3 < (unsigned)2) ? 1 : 0;                  // 0x00111740: sltiu $v1, $a3, 2
    if (v1 != 0) return;  // Branch to 0x11198c                 // 0x00111744: bnez $v1, 0x11198c
    a0 = *(int32_t*)(a1);                                       // 0x0011174c: lw $a0, 0($a1)
    v1 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x00111750: sltiu $v1, $a0, 2
    if (v1 != 0) return;  // Branch to 0x11198c                 // 0x00111754: bnez $v1, 0x11198c
    v0 = a3 ^ 4;                                                // 0x0011175c: xori $v0, $a3, 4
    if (v0 != 0) return;  // Branch to 0x111790                 // 0x00111760: bnez $v0, 0x111790
    v1 = a0 ^ 4;                                                // 0x00111764: xori $v1, $a0, 4
    v0 = a0 ^ 4;                                                // 0x00111768: xori $v0, $a0, 4
    if (v0 != 0) return;  // Branch to 0x1117e0                 // 0x0011176c: bnez $v0, 0x1117e0
    /* nop */                                                   // 0x00111770: nop 
    v1 = *(int32_t*)((a1) + 4);                                 // 0x00111774: lw $v1, 4($a1)
    v0 = *(int32_t*)((t3) + 4);                                 // 0x00111778: lw $v0, 4($t3)
    if (v0 == v1) return;  // Branch to 0x1117e0                // 0x0011177c: beq $v0, $v1, 0x1117e0
    /* nop */                                                   // 0x00111780: nop 
    v0 = 0x22 << 16;                                            // 0x00111784: lui $v0, 0x22
    return;                                                     // 0x00111788: jr $ra
    v0 = v0 + 0xe20;                                            // 0x0011178c: addiu $v0, $v0, 0xe20
}