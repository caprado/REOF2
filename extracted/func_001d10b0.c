void func_001d10b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x33 << 16;                                            // 0x001d10b0: lui $at, 0x33
    a0 = g_0032e0e0;  // Global at 0x0032e0e0                   // 0x001d10b4: lh $a0, -0x1f20($at)
    if (a0 == 0) goto label_0x1d1104;                           // 0x001d10b8: beqz $a0, 0x1d1104
    v0 = 1;                                                     // 0x001d10bc: addiu $v0, $zero, 1
    v0 = 2;                                                     // 0x001d10c0: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1d10fc;                          // 0x001d10c4: beq $a0, $v0, 0x1d10fc
    at = 0x33 << 16;                                            // 0x001d10c8: lui $at, 0x33
    v1 = 3;                                                     // 0x001d10cc: addiu $v1, $zero, 3
    if (a0 == v1) goto label_0x1d10f4;                          // 0x001d10d0: beq $a0, $v1, 0x1d10f4
    at = 0x33 << 16;                                            // 0x001d10d4: lui $at, 0x33
    v0 = 1;                                                     // 0x001d10d8: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1d10ec;                          // 0x001d10dc: beq $a0, $v0, 0x1d10ec
    at = 0x33 << 16;                                            // 0x001d10e0: lui $at, 0x33
    goto label_0x1d110c;                                        // 0x001d10e4: b 0x1d110c
    /* nop */                                                   // 0x001d10e8: nop 
label_0x1d10ec:
    goto label_0x1d110c;                                        // 0x001d10ec: b 0x1d110c
    g_0032e0e0 = v1;  // Global at 0x0032e0e0                   // 0x001d10f0: sh $v1, -0x1f20($at)
label_0x1d10f4:
    goto label_0x1d110c;                                        // 0x001d10f4: b 0x1d110c
    g_0032e0e0 = v0;  // Global at 0x0032e0e0                   // 0x001d10f8: sh $v0, -0x1f20($at)
label_0x1d10fc:
    goto label_0x1d110c;                                        // 0x001d10fc: b 0x1d110c
    g_0032e0e0 = 0;  // Global at 0x0032e0e0                    // 0x001d1100: sh $zero, -0x1f20($at)
label_0x1d1104:
    at = 0x33 << 16;                                            // 0x001d1104: lui $at, 0x33
    g_0032e0e0 = v0;  // Global at 0x0032e0e0                   // 0x001d1108: sh $v0, -0x1f20($at)
label_0x1d110c:
    at = 0x33 << 16;                                            // 0x001d110c: lui $at, 0x33
    v1 = *(uint8_t*)((gp) + -0x6290);                           // 0x001d1110: lbu $v1, -0x6290($gp)
    v0 = g_0032e0e0;  // Global at 0x0032e0e0                   // 0x001d1114: lh $v0, -0x1f20($at)
    v0 = v1 ^ v0;                                               // 0x001d1118: xor $v0, $v1, $v0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001d111c: sltiu $v0, $v0, 1
    return;                                                     // 0x001d1120: jr $ra
    v0 = -v0;                                                   // 0x001d1124: negu $v0, $v0
}