void func_001d1050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(uint8_t*)((gp) + -0x6280);                           // 0x001d1050: lbu $v0, -0x6280($gp)
    v1 = 1;                                                     // 0x001d1054: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1d1078;                          // 0x001d1058: bne $v0, $v1, 0x1d1078
    /* nop */                                                   // 0x001d105c: nop 
    v0 = *(int16_t*)((gp) + -0x6250);                           // 0x001d1060: lh $v0, -0x6250($gp)
    if (v0 != v1) goto label_0x1d1094;                          // 0x001d1064: bne $v0, $v1, 0x1d1094
    v0 = -1;                                                    // 0x001d1068: addiu $v0, $zero, -1
    *(uint16_t*)((gp) + -0x6250) = 0;                           // 0x001d106c: sh $zero, -0x6250($gp)
    goto label_0x1d1094;                                        // 0x001d1070: b 0x1d1094
label_0x1d1078:
    v0 = *(int16_t*)((gp) + -0x6250);                           // 0x001d1078: lh $v0, -0x6250($gp)
    if (v0 != 0) goto label_0x1d1090;                           // 0x001d107c: bnez $v0, 0x1d1090
    /* nop */                                                   // 0x001d1080: nop 
    *(uint16_t*)((gp) + -0x6250) = v1;                          // 0x001d1084: sh $v1, -0x6250($gp)
    goto label_0x1d1094;                                        // 0x001d1088: b 0x1d1094
label_0x1d1090:
    v0 = -1;                                                    // 0x001d1090: addiu $v0, $zero, -1
label_0x1d1094:
    return;                                                     // 0x001d1094: jr $ra
    /* nop */                                                   // 0x001d1098: nop 
}