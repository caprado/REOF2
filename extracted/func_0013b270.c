void func_0013b270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013b270: lui $v0, 0x20
    v1 = v0 + 0x40f0;                                           // 0x0013b278: addiu $v1, $v0, 0x40f0
    a0 = 0xc;                                                   // 0x0013b27c: addiu $a0, $zero, 0xc
label_0x13b280:
    v0 = g_002040f0;  // Global at 0x002040f0                   // 0x0013b280: lb $v0, 0($v1)
    a0 = a0 + -1;                                               // 0x0013b284: addiu $a0, $a0, -1
    v0 = v0 ^ 0;                                                // 0x0013b288: xori $v0, $v0, 0
    if (v0 == 0) a1 = v1;                                       // 0x0013b28c: movz $a1, $v1, $v0
    /* nop */                                                   // 0x0013b290: nop 
    if (a0 >= 0) goto label_0x13b280;                           // 0x0013b294: bgez $a0, 0x13b280
    v1 = v1 + 0x30;                                             // 0x0013b298: addiu $v1, $v1, 0x30
    return;                                                     // 0x0013b29c: jr $ra
}