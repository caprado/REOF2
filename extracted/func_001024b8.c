void func_001024b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = v1 & 0x200;                                            // 0x001024bc: andi $v0, $v1, 0x200
    if (v0 == 0) goto label_0x1024d0;                           // 0x001024c0: beqz $v0, 0x1024d0
    v0 = v1 & 0x400;                                            // 0x001024c4: andi $v0, $v1, 0x400
    goto label_0x1024f8;                                        // 0x001024c8: b 0x1024f8
    v1 = 1;                                                     // 0x001024cc: addiu $v1, $zero, 1
label_0x1024d0:
    if (v0 == 0) goto label_0x1024e0;                           // 0x001024d0: beqz $v0, 0x1024e0
    v0 = v1 & 0x800;                                            // 0x001024d4: andi $v0, $v1, 0x800
    goto label_0x1024f8;                                        // 0x001024d8: b 0x1024f8
    v1 = 2;                                                     // 0x001024dc: addiu $v1, $zero, 2
label_0x1024e0:
    if (v0 == 0) goto label_0x1024f0;                           // 0x001024e0: beqz $v0, 0x1024f0
    v0 = v1 & 0x100;                                            // 0x001024e4: andi $v0, $v1, 0x100
    goto label_0x1024f8;                                        // 0x001024e8: b 0x1024f8
    v1 = 3;                                                     // 0x001024ec: addiu $v1, $zero, 3
label_0x1024f0:
    v1 = 4;                                                     // 0x001024f0: addiu $v1, $zero, 4
    if (v0 == 0) v1 = 0;                                        // 0x001024f4: movz $v1, $zero, $v0
label_0x1024f8:
    return;                                                     // 0x001024f8: jr $ra
}