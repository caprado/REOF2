void func_001bae50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bae50: addiu $sp, $sp, -0x10
    func_001b7a80();  // 0x1b7a70                                // 0x001bae58: jal 0x1b7a70
    a0 = 0x58;                                                  // 0x001bae5c: addiu $a0, $zero, 0x58
    if (v0 != 0) goto label_0x1baf4c;                           // 0x001bae60: bnez $v0, 0x1baf4c
    at = 0x31 << 16;                                            // 0x001bae64: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001bae68: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1baee4;                           // 0x001bae6c: beqz $v0, 0x1baee4
    /* nop */                                                   // 0x001bae70: nop 
    at = 0x49 << 16;                                            // 0x001bae74: lui $at, 0x49
    v0 = g_004912c8;  // Global at 0x004912c8                   // 0x001bae78: lb $v0, 0x12c8($at)
    if (v0 == 0) goto label_0x1baee4;                           // 0x001bae7c: beqz $v0, 0x1baee4
    /* nop */                                                   // 0x001bae80: nop 
    at = 0x31 << 16;                                            // 0x001bae84: lui $at, 0x31
    v0 = 0xff00 << 16;                                          // 0x001bae88: lui $v0, 0xff00
    v1 = g_00308014;  // Global at 0x00308014                   // 0x001bae8c: lw $v1, -0x7fec($at)
    v0 = v1 & v0;                                               // 0x001bae90: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x1baee4;                           // 0x001bae94: beqz $v0, 0x1baee4
    /* nop */                                                   // 0x001bae98: nop 
    a0 = 0xd;                                                   // 0x001bae9c: addiu $a0, $zero, 0xd
    func_001aefe0();  // 0x1aefd0                                // 0x001baea0: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001baea8: addiu $a0, $zero, 0x5f
    func_001aefe0();  // 0x1aefd0                                // 0x001baeac: jal 0x1aefd0
    a1 = 5;                                                     // 0x001baeb0: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001baeb4: addiu $a0, $zero, 0x60
    func_001aefe0();  // 0x1aefd0                                // 0x001baeb8: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001baec0: addiu $a0, $zero, 0x6c
    func_001aefe0();  // 0x1aefd0                                // 0x001baec4: jal 0x1aefd0
    a0 = 4;                                                     // 0x001baecc: addiu $a0, $zero, 4
    func_001aeb00();  // 0x1aea70                                // 0x001baed0: jal 0x1aea70
    a1 = 5;                                                     // 0x001baed4: addiu $a1, $zero, 5
    a0 = 0x31 << 16;                                            // 0x001baed8: lui $a0, 0x31
    func_001ab7c0();  // 0x1ab530                                // 0x001baedc: jal 0x1ab530
    a0 = a0 + -0x7ff4;                                          // 0x001baee0: addiu $a0, $a0, -0x7ff4
label_0x1baee4:
    at = 0x31 << 16;                                            // 0x001baee4: lui $at, 0x31
    v0 = g_00308020;  // Global at 0x00308020                   // 0x001baee8: lbu $v0, -0x7fe0($at)
    if (v0 == 0) goto label_0x1baf44;                           // 0x001baeec: beqz $v0, 0x1baf44
    a0 = 0xd;                                                   // 0x001baef0: addiu $a0, $zero, 0xd
    func_001aefe0();  // 0x1aefd0                                // 0x001baef4: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001baefc: addiu $a0, $zero, 0x5f
    func_001aefe0();  // 0x1aefd0                                // 0x001baf00: jal 0x1aefd0
    a1 = 5;                                                     // 0x001baf04: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001baf08: addiu $a0, $zero, 0x60
    func_001aefe0();  // 0x1aefd0                                // 0x001baf0c: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001baf14: addiu $a0, $zero, 0x6c
    func_001aefe0();  // 0x1aefd0                                // 0x001baf18: jal 0x1aefd0
    a0 = 4;                                                     // 0x001baf20: addiu $a0, $zero, 4
    func_001aeb00();  // 0x1aea70                                // 0x001baf24: jal 0x1aea70
    a1 = 5;                                                     // 0x001baf28: addiu $a1, $zero, 5
    a0 = 0x31 << 16;                                            // 0x001baf2c: lui $a0, 0x31
    func_001ab7c0();  // 0x1ab530                                // 0x001baf30: jal 0x1ab530
    a0 = a0 + -0x7fd4;                                          // 0x001baf34: addiu $a0, $a0, -0x7fd4
    a0 = 0x31 << 16;                                            // 0x001baf38: lui $a0, 0x31
    func_001ab7c0();  // 0x1ab530                                // 0x001baf3c: jal 0x1ab530
    a0 = a0 + -0x7fc8;                                          // 0x001baf40: addiu $a0, $a0, -0x7fc8
label_0x1baf44:
    func_001bb060();  // 0x1baf60                                // 0x001baf44: jal 0x1baf60
    /* nop */                                                   // 0x001baf48: nop 
label_0x1baf4c:
    return;                                                     // 0x001baf50: jr $ra
    sp = sp + 0x10;                                             // 0x001baf54: addiu $sp, $sp, 0x10
}