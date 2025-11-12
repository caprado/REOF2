void func_0018da10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x18da2c;                                        // 0x0018da10: b 0x18da2c
label_0x18da18:
    a3 = a3 + 1;                                                // 0x0018da18: addiu $a3, $a3, 1
    a1 = v1 + 1;                                                // 0x0018da1c: addiu $a1, $v1, 1
    v1 = *(int8_t*)(v1);                                        // 0x0018da20: lb $v1, 0($v1)
    *(uint8_t*)(a0) = v1;                                       // 0x0018da24: sb $v1, 0($a0)
    a0 = a0 + 1;                                                // 0x0018da28: addiu $a0, $a0, 1
label_0x18da2c:
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x0018da2c: slt $v1, $a3, $a2
    if (v1 != 0) goto label_0x18da18;                           // 0x0018da30: bnez $v1, 0x18da18
    return;                                                     // 0x0018da38: jr $ra
    /* nop */                                                   // 0x0018da3c: nop 
}