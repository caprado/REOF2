void func_001c2370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int8_t*)(a0);                                        // 0x001c2370: lb $v1, 0($a0)
    v0 = 0x3c;                                                  // 0x001c2374: addiu $v0, $zero, 0x3c
    if (v1 == v0) goto label_0x1c2388;                          // 0x001c2378: beq $v1, $v0, 0x1c2388
    goto label_0x1c23c0;                                        // 0x001c2380: b 0x1c23c0
    /* nop */                                                   // 0x001c2384: nop 
label_0x1c2388:
    a0 = a0 + 1;                                                // 0x001c2388: addiu $a0, $a0, 1
    v0 = 0x3e;                                                  // 0x001c238c: addiu $v0, $zero, 0x3e
label_0x1c2390:
    v1 = *(uint8_t*)(a0);                                       // 0x001c2390: lbu $v1, 0($a0)
    if (v1 != 0) goto label_0x1c23a4;                           // 0x001c2394: bnez $v1, 0x1c23a4
    a0 = a0 + 1;                                                // 0x001c2398: addiu $a0, $a0, 1
    goto label_0x1c23c0;                                        // 0x001c239c: b 0x1c23c0
label_0x1c23a4:
    if (v1 == v0) goto label_0x1c23b8;                          // 0x001c23a4: beq $v1, $v0, 0x1c23b8
    /* nop */                                                   // 0x001c23a8: nop 
    *(uint8_t*)(a1) = v1;                                       // 0x001c23ac: sb $v1, 0($a1)
    goto label_0x1c2390;                                        // 0x001c23b0: b 0x1c2390
    a1 = a1 + 1;                                                // 0x001c23b4: addiu $a1, $a1, 1
label_0x1c23b8:
    *(uint8_t*)(a1) = 0;                                        // 0x001c23b8: sb $zero, 0($a1)
label_0x1c23c0:
    return;                                                     // 0x001c23c0: jr $ra
    /* nop */                                                   // 0x001c23c4: nop 
}