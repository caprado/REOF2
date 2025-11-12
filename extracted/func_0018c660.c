void func_0018c660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x0018c660: lui $v1, 0x7000
    v1 = a1 + v1;                                               // 0x0018c668: addu $v1, $a1, $v1
    v0 = 1;                                                     // 0x0018c66c: addiu $v0, $zero, 1
    if (a2 != v0) goto label_0x18c688;                          // 0x0018c670: bne $a2, $v0, 0x18c688
    *(uint32_t*)(a0) = v1;                                      // 0x0018c674: sw $v1, 0($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0018c678: lw $v1, 0($a0)
    v0 = 0x8000 << 16;                                          // 0x0018c67c: lui $v0, 0x8000
    v0 = v1 | v0;                                               // 0x0018c680: or $v0, $v1, $v0
    *(uint32_t*)(a0) = v0;                                      // 0x0018c684: sw $v0, 0($a0)
label_0x18c688:
    return;                                                     // 0x0018c688: jr $ra
    v0 = a0 + 0x10;                                             // 0x0018c68c: addiu $v0, $a0, 0x10
}