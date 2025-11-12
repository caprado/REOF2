void func_00134b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134b70: addiu $sp, $sp, -0x10
    a3 = v0 + 0x32;                                             // 0x00134b7c: addiu $a3, $v0, 0x32
    a2 = v0 + 0x30;                                             // 0x00134b84: addiu $a2, $v0, 0x30
    return func_00126330();  // Tail call                        // 0x00134b8c: j 0x1261d0
    sp = sp + 0x10;                                             // 0x00134b90: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134b94: nop 
    v1 = *(uint16_t*)(a1);                                      // 0x00134b98: lhu $v1, 0($a1)
    *(uint16_t*)((a0) + 0x28) = v1;                             // 0x00134b9c: sh $v1, 0x28($a0)
    v0 = *(uint16_t*)(a2);                                      // 0x00134ba0: lhu $v0, 0($a2)
    *(uint16_t*)((a0) + 0x2a) = v0;                             // 0x00134ba4: sh $v0, 0x2a($a0)
    v1 = *(uint16_t*)((a1) + 2);                                // 0x00134ba8: lhu $v1, 2($a1)
    *(uint16_t*)((a0) + 0x2c) = v1;                             // 0x00134bac: sh $v1, 0x2c($a0)
    v0 = *(uint16_t*)((a2) + 2);                                // 0x00134bb0: lhu $v0, 2($a2)
    return;                                                     // 0x00134bb4: jr $ra
    *(uint16_t*)((a0) + 0x2e) = v0;                             // 0x00134bb8: sh $v0, 0x2e($a0)
}