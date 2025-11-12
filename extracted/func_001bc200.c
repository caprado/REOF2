void func_001bc200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x20;                                            // 0x001bc200: addiu $sp, $sp, -0x20
    func_001d3d20();  // 0x1d3cb0                                // 0x001bc208: jal 0x1d3cb0
    a0 = 0xa;                                                   // 0x001bc20c: addiu $a0, $zero, 0xa
    local_1c = v0;                                              // 0x001bc210: sw $v0, 0x1c($sp)
    v1 = local_1c;                                              // 0x001bc214: lw $v1, 0x1c($sp)
    if (v1 == 0) goto label_0x1bc294;                           // 0x001bc218: beqz $v1, 0x1bc294
    /* nop */                                                   // 0x001bc21c: nop 
    func_001ae910();  // 0x1ae8d0                                // 0x001bc220: jal 0x1ae8d0
    /* nop */                                                   // 0x001bc224: nop 
    a0 = 0xd;                                                   // 0x001bc228: addiu $a0, $zero, 0xd
    func_001aefe0();  // 0x1aefd0                                // 0x001bc22c: jal 0x1aefd0
    a0 = 0x5f;                                                  // 0x001bc234: addiu $a0, $zero, 0x5f
    func_001aefe0();  // 0x1aefd0                                // 0x001bc238: jal 0x1aefd0
    a1 = 5;                                                     // 0x001bc23c: addiu $a1, $zero, 5
    a0 = 0x60;                                                  // 0x001bc240: addiu $a0, $zero, 0x60
    func_001aefe0();  // 0x1aefd0                                // 0x001bc244: jal 0x1aefd0
    a0 = 0x63;                                                  // 0x001bc24c: addiu $a0, $zero, 0x63
    func_001aefe0();  // 0x1aefd0                                // 0x001bc250: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001bc258: addiu $a0, $zero, 0x6c
    func_001aefe0();  // 0x1aefd0                                // 0x001bc25c: jal 0x1aefd0
    a0 = 1;                                                     // 0x001bc264: addiu $a0, $zero, 1
    func_0019d450();  // 0x19d440                                // 0x001bc268: jal 0x19d440
    a1 = sp + 0x1c;                                             // 0x001bc26c: addiu $a1, $sp, 0x1c
    a1 = local_1c;                                              // 0x001bc270: lw $a1, 0x1c($sp)
    func_001aefe0();  // 0x1aefd0                                // 0x001bc274: jal 0x1aefd0
    a0 = 4;                                                     // 0x001bc278: addiu $a0, $zero, 4
    a0 = 4;                                                     // 0x001bc27c: addiu $a0, $zero, 4
    func_001aeb00();  // 0x1aea70                                // 0x001bc280: jal 0x1aea70
    a1 = 5;                                                     // 0x001bc284: addiu $a1, $zero, 5
    a0 = 0x22 << 16;                                            // 0x001bc288: lui $a0, 0x22
    func_001ab530();  // 0x1ab230                                // 0x001bc28c: jal 0x1ab230
    a0 = a0 + -0x33c0;                                          // 0x001bc290: addiu $a0, $a0, -0x33c0
label_0x1bc294:
    return;                                                     // 0x001bc298: jr $ra
    sp = sp + 0x20;                                             // 0x001bc29c: addiu $sp, $sp, 0x20
}