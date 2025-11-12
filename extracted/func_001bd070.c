void func_001bd070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = *(int32_t*)((gp) + -0x7c50);                           // 0x001bd070: lw $a0, -0x7c50($gp)
    v0 = 3;                                                     // 0x001bd074: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1bd0a8;                          // 0x001bd078: beq $a0, $v0, 0x1bd0a8
    v0 = -1;                                                    // 0x001bd07c: addiu $v0, $zero, -1
    v1 = 2;                                                     // 0x001bd080: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1bd0a8;                          // 0x001bd084: beq $a0, $v1, 0x1bd0a8
    /* nop */                                                   // 0x001bd088: nop 
    v0 = 1;                                                     // 0x001bd08c: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1bd0a0;                          // 0x001bd090: beq $a0, $v0, 0x1bd0a0
    v0 = -2;                                                    // 0x001bd094: addiu $v0, $zero, -2
    goto label_0x1bd0b0;                                        // 0x001bd098: b 0x1bd0b0
    v0 = *(int32_t*)((gp) + -0x632c);                           // 0x001bd09c: lw $v0, -0x632c($gp)
label_0x1bd0a0:
    goto label_0x1bd0d4;                                        // 0x001bd0a0: b 0x1bd0d4
    /* nop */                                                   // 0x001bd0a4: nop 
label_0x1bd0a8:
    goto label_0x1bd0d4;                                        // 0x001bd0a8: b 0x1bd0d4
    /* nop */                                                   // 0x001bd0ac: nop 
label_0x1bd0b0:
    if (v0 == 0) goto label_0x1bd0d0;                           // 0x001bd0b0: beqz $v0, 0x1bd0d0
    /* nop */                                                   // 0x001bd0b4: nop 
    if (v0 == v1) goto label_0x1bd0c8;                          // 0x001bd0b8: beq $v0, $v1, 0x1bd0c8
    /* nop */                                                   // 0x001bd0bc: nop 
    goto label_0x1bd0d4;                                        // 0x001bd0c0: b 0x1bd0d4
label_0x1bd0c8:
    goto label_0x1bd0d4;                                        // 0x001bd0c8: b 0x1bd0d4
    v0 = -6;                                                    // 0x001bd0cc: addiu $v0, $zero, -6
label_0x1bd0d0:
    v0 = -4;                                                    // 0x001bd0d0: addiu $v0, $zero, -4
label_0x1bd0d4:
    return;                                                     // 0x001bd0d4: jr $ra
    /* nop */                                                   // 0x001bd0d8: nop 
}