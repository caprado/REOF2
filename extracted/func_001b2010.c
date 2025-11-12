void func_001b2010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b2010: addiu $sp, $sp, -0x10
    a1 = 0x31 << 16;                                            // 0x001b2014: lui $a1, 0x31
    a0 = 0xa0;                                                  // 0x001b201c: addiu $a0, $zero, 0xa0
    func_001a5820();  // 0x1a57e0                                // 0x001b2020: jal 0x1a57e0
    a1 = a1 + -0x5d50;                                          // 0x001b2024: addiu $a1, $a1, -0x5d50
    v1 = 0x31 << 16;                                            // 0x001b2028: lui $v1, 0x31
    a0 = 1;                                                     // 0x001b202c: addiu $a0, $zero, 1
    v1 = v1 + -0x7d50;                                          // 0x001b2030: addiu $v1, $v1, -0x7d50
    *(uint8_t*)((gp) + -0x6364) = a0;                           // 0x001b2034: sb $a0, -0x6364($gp)
    a3 = 0xff;                                                  // 0x001b2038: addiu $a3, $zero, 0xff
    *(uint32_t*)((gp) + -0x6370) = v1;                          // 0x001b203c: sw $v1, -0x6370($gp)
label_0x1b2044:
    a1 = *(int32_t*)((gp) + -0x6370);                           // 0x001b2044: lw $a1, -0x6370($gp)
    a2 = a2 + 1;                                                // 0x001b2048: addiu $a2, $a2, 1
    v1 = (a2 < 0x100) ? 1 : 0;                                  // 0x001b204c: slti $v1, $a2, 0x100
    a0 = a1 + -2;                                               // 0x001b2050: addiu $a0, $a1, -2
    *(uint32_t*)((gp) + -0x6370) = a0;                          // 0x001b2054: sw $a0, -0x6370($gp)
    g_0030a2ae = a3;  // Global at 0x0030a2ae                   // 0x001b2058: sh $a3, -2($a1)
    if (v1 != 0) goto label_0x1b2044;                           // 0x001b205c: bnez $v1, 0x1b2044
    a3 = a3 + -1;                                               // 0x001b2060: addiu $a3, $a3, -1
    v1 = 0x100;                                                 // 0x001b2064: addiu $v1, $zero, 0x100
    *(uint16_t*)((gp) + -0x6368) = v1;                          // 0x001b2068: sh $v1, -0x6368($gp)
    return;                                                     // 0x001b2070: jr $ra
    sp = sp + 0x10;                                             // 0x001b2074: addiu $sp, $sp, 0x10
}