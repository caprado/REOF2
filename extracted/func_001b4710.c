void func_001b4710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b4710: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((gp) + -0x63a8);                           // 0x001b4718: lw $a0, -0x63a8($gp)
    if (a0 == 0) goto label_0x1b4738;                           // 0x001b471c: beqz $a0, 0x1b4738
    /* nop */                                                   // 0x001b4720: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x001b4724: jal 0x18daf0
    /* nop */                                                   // 0x001b4728: nop 
    at = 0x31 << 16;                                            // 0x001b472c: lui $at, 0x31
    *(uint32_t*)((gp) + -0x63a8) = 0;                           // 0x001b4730: sw $zero, -0x63a8($gp)
    g_003137cb = 0;  // Global at 0x003137cb                    // 0x001b4734: sb $zero, 0x37cb($at)
label_0x1b4738:
    return;                                                     // 0x001b473c: jr $ra
    sp = sp + 0x10;                                             // 0x001b4740: addiu $sp, $sp, 0x10
}