void func_0016a2f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = *(int32_t*)((v0) + 0x1af4);                            // 0x0016a2fc: lw $a0, 0x1af4($v0)
    v1 = a0 << 3;                                               // 0x0016a300: sll $v1, $a0, 3
    v1 = v1 - a0;                                               // 0x0016a304: subu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0016a308: sll $v1, $v1, 2
    v1 = v1 + a0;                                               // 0x0016a30c: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0016a310: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0016a314: addu $v0, $v0, $v1
    return;                                                     // 0x0016a318: jr $ra
    v0 = v0 + 0x1150;                                           // 0x0016a31c: addiu $v0, $v0, 0x1150
}