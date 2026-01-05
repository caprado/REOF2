void func_001a3140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a3140: addiu $sp, $sp, -0x20
    func_001a2e50();  // 1a2e50                                // 0x001a314c: jal 0x1a2e50
    if (v0 != 0) goto label_0x1a3164;                           // 0x001a3154: bnez $v0, 0x1a3164
    goto label_0x1a31b4;                                        // 0x001a315c: b 0x1a31b4
label_0x1a3164:
    a1 = 5 << 16;                                               // 0x001a3164: lui $a1, 5
    func_001a3230();  // 1a3230                                // 0x001a3168: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3180;                           // 0x001a3170: bnez $v0, 0x1a3180
    /* nop */                                                   // 0x001a3174: nop 
    goto label_0x1a31b4;                                        // 0x001a3178: b 0x1a31b4
label_0x1a3180:
    a1 = *(int32_t*)((v0) + 4);                                 // 0x001a3180: lw $a1, 4($v0)
    a0 = v0 + 0xc;                                              // 0x001a3184: addiu $a0, $v0, 0xc
    goto label_0x1a31a8;                                        // 0x001a3188: b 0x1a31a8
label_0x1a3190:
    v1 = *(int32_t*)(a0);                                       // 0x001a3190: lw $v1, 0($a0)
    v0 = a2 << 2;                                               // 0x001a3194: sll $v0, $a2, 2
    v0 = s0 + v0;                                               // 0x001a3198: addu $v0, $s0, $v0
    a2 = a2 + 1;                                                // 0x001a319c: addiu $a2, $a2, 1
    *(uint32_t*)(v0) = v1;                                      // 0x001a31a0: sw $v1, 0($v0)
    a0 = a0 + 4;                                                // 0x001a31a4: addiu $a0, $a0, 4
label_0x1a31a8:
    v0 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x001a31a8: sltu $v0, $a2, $a1
    if (v0 != 0) goto label_0x1a3190;                           // 0x001a31ac: bnez $v0, 0x1a3190
    v0 = 1;                                                     // 0x001a31b0: addiu $v0, $zero, 1
label_0x1a31b4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a31b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a31bc: jr $ra
    sp = sp + 0x20;                                             // 0x001a31c0: addiu $sp, $sp, 0x20
}