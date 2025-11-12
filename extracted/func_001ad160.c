void func_001ad160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint8_t*)((a0) + 1);                                 // 0x001ad160: lbu $v1, 1($a0)
    if (v1 != 0) goto label_0x1ad174;                           // 0x001ad164: bnez $v1, 0x1ad174
    v0 = -1;                                                    // 0x001ad168: addiu $v0, $zero, -1
    goto label_0x1ad1a0;                                        // 0x001ad16c: b 0x1ad1a0
    *(uint8_t*)(a0) = 0;                                        // 0x001ad170: sb $zero, 0($a0)
label_0x1ad174:
    v0 = *(uint8_t*)((a0) + 2);                                 // 0x001ad174: lbu $v0, 2($a0)
    v1 = v0 + 1;                                                // 0x001ad178: addiu $v1, $v0, 1
    *(uint8_t*)((a0) + 2) = v1;                                 // 0x001ad17c: sb $v1, 2($a0)
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x001ad180: lbu $v1, 2($a0)
    v1 = (v1 < 8) ? 1 : 0;                                      // 0x001ad184: slti $v1, $v1, 8
    if (v1 != 0) goto label_0x1ad194;                           // 0x001ad188: bnez $v1, 0x1ad194
    /* nop */                                                   // 0x001ad18c: nop 
    *(uint8_t*)((a0) + 2) = 0;                                  // 0x001ad190: sb $zero, 2($a0)
label_0x1ad194:
    v1 = *(uint8_t*)((a0) + 1);                                 // 0x001ad194: lbu $v1, 1($a0)
    v1 = v1 + -1;                                               // 0x001ad198: addiu $v1, $v1, -1
    *(uint8_t*)((a0) + 1) = v1;                                 // 0x001ad19c: sb $v1, 1($a0)
label_0x1ad1a0:
    return;                                                     // 0x001ad1a0: jr $ra
    /* nop */                                                   // 0x001ad1a4: nop 
}