void func_001cd050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x32 << 16;                                            // 0x001cd050: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001cd054: lui $a0, 0x32
    a1 = g_003257d5;  // Global at 0x003257d5                   // 0x001cd058: lbu $a1, 0x57d5($at)
    goto label_0x1cd08c;                                        // 0x001cd060: b 0x1cd08c
    a0 = a0 + 0x57d0;                                           // 0x001cd064: addiu $a0, $a0, 0x57d0
label_0x1cd068:
    v1 = v1 - v0;                                               // 0x001cd068: subu $v1, $v1, $v0
    v1 = v1 << 2;                                               // 0x001cd06c: sll $v1, $v1, 2
    v1 = a0 + v1;                                               // 0x001cd070: addu $v1, $a0, $v1
    v1 = *(uint8_t*)((v1) + 0x4c);                              // 0x001cd074: lbu $v1, 0x4c($v1)
    if (v1 == 0) goto label_0x1cd088;                           // 0x001cd078: beqz $v1, 0x1cd088
    /* nop */                                                   // 0x001cd07c: nop 
    goto label_0x1cd09c;                                        // 0x001cd080: b 0x1cd09c
    /* nop */                                                   // 0x001cd084: nop 
label_0x1cd088:
    v0 = v0 + 1;                                                // 0x001cd088: addiu $v0, $v0, 1
label_0x1cd08c:
    v1 = (v0 < a1) ? 1 : 0;                                     // 0x001cd08c: slt $v1, $v0, $a1
    if (v1 != 0) goto label_0x1cd068;                           // 0x001cd090: bnez $v1, 0x1cd068
    v1 = v0 << 4;                                               // 0x001cd094: sll $v1, $v0, 4
    v0 = -1;                                                    // 0x001cd098: addiu $v0, $zero, -1
label_0x1cd09c:
    return;                                                     // 0x001cd09c: jr $ra
    /* nop */                                                   // 0x001cd0a0: nop 
}