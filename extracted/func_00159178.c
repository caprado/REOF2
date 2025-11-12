void func_00159178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 1;                                               // 0x00159178: sll $v0, $a1, 1
    v0 = v0 + a1;                                               // 0x0015917c: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00159180: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x00159184: addu $a0, $a0, $v0
    a0 = a0 + 0x388;                                            // 0x00159188: addiu $a0, $a0, 0x388
    *(uint32_t*)((a0) + 8) = t0;                                // 0x0015918c: sw $t0, 8($a0)
    *(uint32_t*)(a0) = a2;                                      // 0x00159190: sw $a2, 0($a0)
    return;                                                     // 0x00159194: jr $ra
    *(uint32_t*)((a0) + 4) = a3;                                // 0x00159198: sw $a3, 4($a0)
}