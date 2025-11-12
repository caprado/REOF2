void func_001b8fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00107d30();  // Tail call                        // 0x001b8fe4: j 0x107c70
    a2 = 0x3c;                                                  // 0x001b8fe8: addiu $a2, $zero, 0x3c
    /* nop */                                                   // 0x001b8fec: nop 
    a0 = 0x39 << 16;                                            // 0x001b8ff0: lui $a0, 0x39
    a0 = a0 + 0x4fe0;                                           // 0x001b8ff8: addiu $a0, $a0, 0x4fe0
    return func_00107d30();  // Tail call                        // 0x001b8ffc: j 0x107c70
    a2 = 0xf0;                                                  // 0x001b9000: addiu $a2, $zero, 0xf0
    /* nop */                                                   // 0x001b9004: nop 
    /* nop */                                                   // 0x001b9008: nop 
    /* nop */                                                   // 0x001b900c: nop 
    v1 = g_00394fe2;  // Global at 0x00394fe2                   // 0x001b9010: lbu $v1, 2($a0)
    at = ((unsigned)v1 < (unsigned)0xf) ? 1 : 0;                // 0x001b9014: sltiu $at, $v1, 0xf
    if (at == 0) goto label_0x1b90c8;                           // 0x001b9018: beqz $at, 0x1b90c8
    v0 = 1;                                                     // 0x001b901c: addiu $v0, $zero, 1
    a2 = 0x24 << 16;                                            // 0x001b9020: lui $a2, 0x24
    v1 = v1 << 2;                                               // 0x001b9024: sll $v1, $v1, 2
    a2 = a2 + -0x22c0;                                          // 0x001b9028: addiu $a2, $a2, -0x22c0
    v1 = v1 + a2;                                               // 0x001b902c: addu $v1, $v1, $a2
    v1 = *(int32_t*)(v1);                                       // 0x001b9030: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001b9034: jr $v1
    /* nop */                                                   // 0x001b9038: nop 
    FPU_F2 = *(float*)((a0) + 0x38);  // Load float             // 0x001b903c: lwc1 $f2, 0x38($a0)
    FPU_F1 = *(float*)((a0) + 0x3c);  // Load float             // 0x001b9040: lwc1 $f1, 0x3c($a0)
    FPU_F0 = *(float*)((a0) + 0x40);  // Load float             // 0x001b9044: lwc1 $f0, 0x40($a0)
    *(float*)(a1) = FPU_F2;  // Store float                     // 0x001b9048: swc1 $f2, 0($a1)
    *(float*)((a1) + 4) = FPU_F1;  // Store float               // 0x001b904c: swc1 $f1, 4($a1)
    goto label_0x1b90d8;                                        // 0x001b9050: b 0x1b90d8
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001b9054: swc1 $f0, 8($a1)
    FPU_F2 = *(float*)((a0) + 0x38);  // Load float             // 0x001b9058: lwc1 $f2, 0x38($a0)
    FPU_F1 = *(float*)((a0) + 0x3c);  // Load float             // 0x001b905c: lwc1 $f1, 0x3c($a0)
    FPU_F0 = *(float*)((a0) + 0x40);  // Load float             // 0x001b9060: lwc1 $f0, 0x40($a0)
    *(float*)(a1) = FPU_F2;  // Store float                     // 0x001b9064: swc1 $f2, 0($a1)
    *(float*)((a1) + 4) = FPU_F1;  // Store float               // 0x001b9068: swc1 $f1, 4($a1)
    goto label_0x1b90d8;                                        // 0x001b906c: b 0x1b90d8
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001b9070: swc1 $f0, 8($a1)
    FPU_F2 = *(float*)((a0) + 0x38);  // Load float             // 0x001b9074: lwc1 $f2, 0x38($a0)
    FPU_F1 = *(float*)((a0) + 0x3c);  // Load float             // 0x001b9078: lwc1 $f1, 0x3c($a0)
    FPU_F0 = *(float*)((a0) + 0x40);  // Load float             // 0x001b907c: lwc1 $f0, 0x40($a0)
    *(float*)(a1) = FPU_F2;  // Store float                     // 0x001b9080: swc1 $f2, 0($a1)
    *(float*)((a1) + 4) = FPU_F1;  // Store float               // 0x001b9084: swc1 $f1, 4($a1)
    goto label_0x1b90d8;                                        // 0x001b9088: b 0x1b90d8
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001b908c: swc1 $f0, 8($a1)
    FPU_F2 = *(float*)((a0) + 0x70);  // Load float             // 0x001b9090: lwc1 $f2, 0x70($a0)
    FPU_F1 = *(float*)((a0) + 0x74);  // Load float             // 0x001b9094: lwc1 $f1, 0x74($a0)
    FPU_F0 = *(float*)((a0) + 0x78);  // Load float             // 0x001b9098: lwc1 $f0, 0x78($a0)
    *(float*)(a1) = FPU_F2;  // Store float                     // 0x001b909c: swc1 $f2, 0($a1)
    *(float*)((a1) + 4) = FPU_F1;  // Store float               // 0x001b90a0: swc1 $f1, 4($a1)
    goto label_0x1b90d8;                                        // 0x001b90a4: b 0x1b90d8
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001b90a8: swc1 $f0, 8($a1)
    FPU_F2 = *(float*)((a0) + 0x38);  // Load float             // 0x001b90ac: lwc1 $f2, 0x38($a0)
    FPU_F1 = *(float*)((a0) + 0x3c);  // Load float             // 0x001b90b0: lwc1 $f1, 0x3c($a0)
    FPU_F0 = *(float*)((a0) + 0x40);  // Load float             // 0x001b90b4: lwc1 $f0, 0x40($a0)
    *(float*)(a1) = FPU_F2;  // Store float                     // 0x001b90b8: swc1 $f2, 0($a1)
    *(float*)((a1) + 4) = FPU_F1;  // Store float               // 0x001b90bc: swc1 $f1, 4($a1)
    goto label_0x1b90d8;                                        // 0x001b90c0: b 0x1b90d8
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x001b90c4: swc1 $f0, 8($a1)
label_0x1b90c8:
    *(uint32_t*)((a1) + 8) = 0;                                 // 0x001b90c8: sw $zero, 8($a1)
    *(uint32_t*)((a1) + 4) = 0;                                 // 0x001b90d0: sw $zero, 4($a1)
    *(uint32_t*)(a1) = 0;                                       // 0x001b90d4: sw $zero, 0($a1)
label_0x1b90d8:
    return;                                                     // 0x001b90d8: jr $ra
    /* nop */                                                   // 0x001b90dc: nop 
}