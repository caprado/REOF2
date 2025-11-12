void func_00192330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00192330: addiu $sp, $sp, -0x10
    thunk_func_001a0a10();  // 0x18daf0                          // 0x00192338: jal 0x18daf0
    /* nop */                                                   // 0x0019233c: nop 
    v0 = 1;                                                     // 0x00192344: addiu $v0, $zero, 1
    return;                                                     // 0x00192348: jr $ra
    sp = sp + 0x10;                                             // 0x0019234c: addiu $sp, $sp, 0x10
}