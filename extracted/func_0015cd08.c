void func_0015cd08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a1) + 0x18);                              // 0x0015cd08: lw $v1, 0x18($a1)
    v0 = a0 + 0x158;                                            // 0x0015cd0c: addiu $v0, $a0, 0x158
    a2 = *(int32_t*)((a1) + 0x1c);                              // 0x0015cd10: lw $a2, 0x1c($a1)
    a3 = a0 + 0x1e8;                                            // 0x0015cd14: addiu $a3, $a0, 0x1e8
    *(uint32_t*)(v0) = v1;                                      // 0x0015cd18: sw $v1, 0($v0)
    t0 = 0x1f;                                                  // 0x0015cd1c: addiu $t0, $zero, 0x1f
    *(uint32_t*)((v0) + 4) = a2;                                // 0x0015cd20: sw $a2, 4($v0)
    v1 = *(int32_t*)((a1) + 0x18);                              // 0x0015cd24: lw $v1, 0x18($a1)
    *(uint32_t*)((v0) + 0xc) = 0;                               // 0x0015cd28: sw $zero, 0xc($v0)
    *(uint32_t*)((v0) + 8) = v1;                                // 0x0015cd2c: sw $v1, 8($v0)
    *(uint32_t*)((a0) + 0x168) = 0;                             // 0x0015cd30: sw $zero, 0x168($a0)
    /* nop */                                                   // 0x0015cd34: nop 
label_0x15cd38:
    t0 = t0 + -1;                                               // 0x0015cd38: addiu $t0, $t0, -1
    *(uint32_t*)(a3) = 0;                                       // 0x0015cd3c: sw $zero, 0($a3)
    /* nop */                                                   // 0x0015cd40: nop 
    /* nop */                                                   // 0x0015cd44: nop 
    /* nop */                                                   // 0x0015cd48: nop 
    if (t0 >= 0) goto label_0x15cd38;                           // 0x0015cd4c: bgez $t0, 0x15cd38
    a3 = a3 + -4;                                               // 0x0015cd50: addiu $a3, $a3, -4
    return;                                                     // 0x0015cd54: jr $ra
    /* nop */                                                   // 0x0015cd58: nop 
}