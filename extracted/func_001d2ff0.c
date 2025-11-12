void func_001d2ff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x1d302c;                                        // 0x001d2ff4: b 0x1d302c
label_0x1d2ffc:
    a2 = *(int8_t*)(a0);                                        // 0x001d2ffc: lb $a2, 0($a0)
    v1 = (a2 < 0x30) ? 1 : 0;                                   // 0x001d3000: slti $v1, $a2, 0x30
    if (v1 != 0) goto label_0x1d3024;                           // 0x001d3004: bnez $v1, 0x1d3024
    at = (a2 < 0x3a) ? 1 : 0;                                   // 0x001d3008: slti $at, $a2, 0x3a
    if (at == 0) goto label_0x1d3024;                           // 0x001d300c: beqz $at, 0x1d3024
    v1 = a2 + -0x30;                                            // 0x001d3010: addiu $v1, $a2, -0x30
    a2 = v0 << 2;                                               // 0x001d3014: sll $a2, $v0, 2
    v0 = a2 + v0;                                               // 0x001d3018: addu $v0, $a2, $v0
    v0 = v0 << 1;                                               // 0x001d301c: sll $v0, $v0, 1
    v0 = v0 + v1;                                               // 0x001d3020: addu $v0, $v0, $v1
label_0x1d3024:
    a0 = a0 + 1;                                                // 0x001d3024: addiu $a0, $a0, 1
    a3 = a3 + 1;                                                // 0x001d3028: addiu $a3, $a3, 1
label_0x1d302c:
    v1 = (a3 < a1) ? 1 : 0;                                     // 0x001d302c: slt $v1, $a3, $a1
    if (v1 != 0) goto label_0x1d2ffc;                           // 0x001d3030: bnez $v1, 0x1d2ffc
    /* nop */                                                   // 0x001d3034: nop 
    return;                                                     // 0x001d3038: jr $ra
    /* nop */                                                   // 0x001d303c: nop 
}