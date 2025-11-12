void func_001aed20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aed20: addiu $sp, $sp, -0x10
    func_00344c40();  // 0x344c40                               // 0x001aed28: jal 0x344c40
    *(uint16_t*)((gp) + -0x634c) = 0;                           // 0x001aed2c: sh $zero, -0x634c($gp)
    func_001adc60();  // 0x1adbe0                                // 0x001aed30: jal 0x1adbe0
    /* nop */                                                   // 0x001aed34: nop 
    func_001ac9a0();  // 0x1ac990                                // 0x001aed38: jal 0x1ac990
    /* nop */                                                   // 0x001aed3c: nop 
    func_001ba310();  // 0x1ba2a0                                // 0x001aed40: jal 0x1ba2a0
    a0 = 3;                                                     // 0x001aed44: addiu $a0, $zero, 3
    func_001ba070();  // 0x1ba060                                // 0x001aed48: jal 0x1ba060
    /* nop */                                                   // 0x001aed4c: nop 
    func_001b7890();  // 0x1b77f0                                // 0x001aed50: jal 0x1b77f0
    /* nop */                                                   // 0x001aed54: nop 
    a0 = 2;                                                     // 0x001aed58: addiu $a0, $zero, 2
    func_001a9030();  // 0x1a8fc0                                // 0x001aed5c: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aeda0;                           // 0x001aed64: beqz $v0, 0x1aeda0
    a0 = 3;                                                     // 0x001aed68: addiu $a0, $zero, 3
    at = 0x31 << 16;                                            // 0x001aed6c: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001aed70: lbu $v0, 0x37a0($at)
    if (v0 != 0) goto label_0x1aed8c;                           // 0x001aed74: bnez $v0, 0x1aed8c
    /* nop */                                                   // 0x001aed78: nop 
    v1 = *(int16_t*)((gp) + -0x6348);                           // 0x001aed7c: lh $v1, -0x6348($gp)
    v0 = 1;                                                     // 0x001aed80: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1aed9c;                          // 0x001aed84: bne $v1, $v0, 0x1aed9c
    /* nop */                                                   // 0x001aed88: nop 
label_0x1aed8c:
    func_001aed20();  // 0x1aece0                                // 0x001aed8c: jal 0x1aece0
    /* nop */                                                   // 0x001aed90: nop 
    func_001aeb80();  // 0x1aeb00                                // 0x001aed94: jal 0x1aeb00
    /* nop */                                                   // 0x001aed98: nop 
label_0x1aed9c:
    a0 = 3;                                                     // 0x001aed9c: addiu $a0, $zero, 3
label_0x1aeda0:
    func_001a9030();  // 0x1a8fc0                                // 0x001aeda0: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1aedb8;                           // 0x001aeda8: beqz $v0, 0x1aedb8
    /* nop */                                                   // 0x001aedac: nop 
    func_001aeb80();  // 0x1aeb00                                // 0x001aedb0: jal 0x1aeb00
    /* nop */                                                   // 0x001aedb4: nop 
label_0x1aedb8:
    func_001aebe0();  // 0x1aeb80                                // 0x001aedb8: jal 0x1aeb80
    /* nop */                                                   // 0x001aedbc: nop 
    func_001a9b30();  // 0x1a9b20                                // 0x001aedc0: jal 0x1a9b20
    *(uint16_t*)((gp) + -0x6348) = 0;                           // 0x001aedc4: sh $zero, -0x6348($gp)
    func_001b7ab0();  // 0x1b7aa0                                // 0x001aedc8: jal 0x1b7aa0
    /* nop */                                                   // 0x001aedcc: nop 
    func_001bc750();  // 0x1bc6d0                                // 0x001aedd0: jal 0x1bc6d0
    /* nop */                                                   // 0x001aedd4: nop 
    func_001b7970();  // 0x1b7940                                // 0x001aedd8: jal 0x1b7940
    /* nop */                                                   // 0x001aeddc: nop 
    return;                                                     // 0x001aede4: jr $ra
    sp = sp + 0x10;                                             // 0x001aede8: addiu $sp, $sp, 0x10
}